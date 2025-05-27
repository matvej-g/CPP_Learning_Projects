#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotmyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>

int main() {
	std::srand(std::time(nullptr)); //creates seed with current time
	std::cout << "--- ShrubberyCreationform test ---\n";
	try {
		Bureaucrat alpha("Alpha", 146);
		ShrubberyCreationForm shrub("test1");

		std::cout << alpha << "\n" << shrub << "\n";
		alpha.signForm(shrub);		// 146 > 145 -> NOK too low to sign
		alpha.executeForm(shrub);	// 146 > 137 -> too low to execute
	
		alpha.incrementGrade();
		alpha.signForm(shrub);
		
		for (int i = 0; i < 8; ++i)
			alpha.incrementGrade();
		std:: cout << alpha << "\n";
		alpha.executeForm(shrub);	// now grade is 137 -> should work
	}
	catch (std::exception &e) {
		std::cerr << "Error in shrubbery test: " << e.what() << "\n";
	}

	std::cout << "\n--- RobotmyRequestForm---\n";
	try {
		Bureaucrat beta("Beta", 73);
		RobotomyRequestForm robot("MegaMan");

		std::cout << beta << "\n" << robot << "\n";
		beta.signForm(robot);		//73 > 72 -> NOK too low to sign
		beta.executeForm(robot);	//50 > 45 -> too low

		beta.incrementGrade();
		beta.signForm(robot);
		for (int i = 0; i < 27; ++i)
			beta.incrementGrade();
			std::cout << beta << "\n";
		beta.executeForm(robot);
	}
	catch (std::exception &e) {
		std::cerr << "Error in robottomy test: " << e.what() << "\n";
	}

	std::cout << "\n--- PresidentailPardonForm Test---\n";
	try {
		Bureaucrat zaphod("Zaphod", 26);
		PresidentialPardonForm pardon("Trump");

		std::cout << zaphod << "\n" << pardon << "\n";
		zaphod.signForm(pardon);	// 26 <= 25 -> NOK too low to sign
		zaphod.executeForm(pardon);	// 26 > 5 -> too low

		zaphod.incrementGrade();
		zaphod.signForm(pardon);

		for (int i = 0; i < 21; ++i)
			zaphod.incrementGrade();
		std::cout << zaphod << "\n";

		zaphod.executeForm(pardon);
	}
	catch (std::exception &e) {
		std::cerr << "Error in pardon test: " << e.what() << "\n";
	}
	return 0;
}
