#include "Bureaucrat.hpp"
#include <iostream>

int main() {
	try {
		Bureaucrat a("Alpha", 150);
		std::cout << a << std::endl;
	}
	catch (const std::exception &err) {
		std::cerr << "Exception caught: "<< err.what() << std::endl;
	}

	std::cout << "\n\n";
	try {
		Bureaucrat b("Beta", 0);
		std::cout << b << std::endl;
	}
	catch (const std::exception &err) {
		std::cerr << "Exception caught: "<< err.what() << std::endl;
	}

	std::cout << "\n\n";
	try {
		Bureaucrat c("Gamma", 1);
		c.incrementGrade();
		std::cout << c << std::endl;
	}
	catch (const std::exception &err) {
		std::cerr << "Exception caught: "<< err.what() << std::endl;
	}

	std::cout << "\n\n";
	try {
		Bureaucrat d("Delta", 150);
		d.decrementGrade();
		std::cout << d << std::endl;
	}
	catch (const std::exception &err) {
		std::cerr << "Exception caught: "<< err.what() << std::endl;
	}

	std::cout << "\n\n";
	try {
		Bureaucrat e("Epsilon", 149);
		e.decrementGrade();
		std::cout << e << std::endl;
	}
	catch (const std::exception &err) {
		std::cerr << "Exception caught: "<< err.what() << std::endl;
	}
	return 0;
}