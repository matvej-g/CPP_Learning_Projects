#include <iostream>
#include "Sample_class.hpp"

int	main(void) {

	Sample instance;

	instance.setFoo(42);	//setting a private member variable over a set function, and calling it with get function
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
	instance.setFoo(-42);	//allowes us to set some rules for the set function
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;

	return (0);
}