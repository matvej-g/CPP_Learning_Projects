#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	//std::cout << "Bureaucrat default constructed" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name) , _grade(grade) {
	if (_grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	if (_grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	//std::cout << "Bureaucrat parameterized constructor called."<< std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {
	//std::cout << "Bureaucrat copy constructed."<< std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other) {
		_grade = other._grade;
	}
	//std::cout << "Bureaucrat assigned." << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	//std::cout << "Bureaucrat destructed." << std::endl;
}

std::string Bureaucrat::getName() const {
	return (_name);
}

int Bureaucrat::getGrade() const {
	return (_grade);
}

void Bureaucrat::incrementGrade() {
	if (_grade <= 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	_grade--;
}

void Bureaucrat::decrementGrade() {
	if (_grade >= 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	_grade++;
}

void Bureaucrat::signForm(AForm &aform)
{
	try {
		aform.beSigned(*this);
		std::cout << *this << " signed " << aform << std::endl;
	}
	catch (std::exception &e) {
		std::cout	<< *this
					<< " couldn't sign " << aform.getName()
					<< " because " << e.what()
					<< std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form) const
{
	try {
		form.execute(*this);
		std::cout	<< *this
					<< " executed " << form
					<< std::endl;
	}
	catch (std::exception &e) {
		std::cout	<< *this
					<< " couldn't execute " << form.getName()
					<< " because " << e.what()
					<< std::endl;
	}
		
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade "<< bureaucrat.getGrade() << ".";
	return (out);
}