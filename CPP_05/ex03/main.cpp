#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include <iostream>


int main() {
	Intern  someIntern;

	AForm* f1 = someIntern.makeForm("robotomy request", "RobotForm");
	if (f1) {
		std::cout << *f1 << "\n";
		delete f1;
	}

	Bureaucrat bob("Bob", 1);
	AForm* f2 = someIntern.makeForm("shrubbery creation", "ShrubberyForm");
	if (f2) {
		std::cout << *f2 << "\n";
		bob.signForm(*f2);
		bob.executeForm(*f2);
		delete f2;
	}

	AForm* f3 = someIntern.makeForm("presidential pardon", "PresidentForm");
	if (f3) {
		std::cout << *f3 << "\n";
		delete f3;
	}

	AForm* nope = someIntern.makeForm("not a real form", "XXX");
	(void)nope;

	return 0;
}
