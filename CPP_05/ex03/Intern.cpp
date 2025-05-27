#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotmyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {
	//std::cout << "Default Intern contructor." << std::endl;
}

Intern::Intern(const Intern&) {
	//std::cout << "Intern copy constructed." << std:endl;
}

Intern &Intern::operator=(const Intern&) {
	return (*this);
}

Intern::~Intern() {
	//std::cout << "Destructor called." << std::endl;
}

static AForm* makeShrub(const std::string& f) {
	return new ShrubberyCreationForm(f);
}

static AForm* makeRobot(const std::string& f) {
	return new RobotomyRequestForm(f);
}

static AForm* makePardon(const std::string & f) {
	return new PresidentialPardonForm(f);
}

AForm* Intern::makeForm(const std::string& name, const std::string& target) const {
	struct Entry {	const char* key;
					AForm*(*form)(const std::string&);
	};
	static constexpr Entry table[] = {
		{ "shrubbery creation", &makeShrub },
		{ "robotomy request", &makeRobot },
		{ "presidential pardon", &makePardon }
	};

	for (auto& e : table) {
		if (name == e.key) {
			AForm* f = e.form(target);
			std::cout << "Intern creates " << name << std::endl;
			return f;
		}
	}

	std::cout << "Intern couldn't create '" << name << "': unknown form." << std::endl;
	return nullptr;
}