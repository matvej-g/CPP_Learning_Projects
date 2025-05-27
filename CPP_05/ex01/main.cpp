#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
	try {
		Bureaucrat alice("Alice", 50);
		Form tax_a("TaxForm", 45, 10);

		std::cout << alice << '\n'
					<< tax_a   << '\n';

		alice.signForm(tax_a);
		// not signed yet → grade 50 > required 45
		alice.incrementGrade(); // 49
		alice.incrementGrade(); // 48
		alice.incrementGrade(); // 47
		alice.incrementGrade(); // 46
		alice.incrementGrade(); // 45

		alice.signForm(tax_a);
		std::cout << tax_a << '\n';
	}
	catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << '\n';
	}
	
	std::cout << "\n\n";
	try {
		Bureaucrat bob("Bob", 150);
		Form tax_b("BobForm", 151, 10);

		std::cout	<< bob << '\n'
					<< tax_b << '\n';

		bob.signForm(tax_b);
		// not signed yet → grade 50 > required 45
		bob.incrementGrade(); // 49
		bob.incrementGrade(); // 48
		bob.incrementGrade(); // 47
		bob.incrementGrade(); // 46
		bob.incrementGrade(); // 45

		bob.signForm(tax_b);
		std::cout << tax_b << '\n';
	}
	catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << '\n';
	}

	std::cout << "\n\n";
	try {
		Bureaucrat steve("Steve", 1);
		Form tax_c("SteveForm", 1, 0);
		std::cout	<< steve << '\n'
					<< tax_c << '\n';
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << "\n";
	}
	return 0;
}
