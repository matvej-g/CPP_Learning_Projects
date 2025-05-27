#include <iostream>
#include "Sample_class.hpp"

int	main(void) {

	Sample instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
	//instance._privateFoo = 42;	//not able to assign a private member/function outside the class
	//std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl;

	instance.publicBar();
	//instance._privateBar();

	return (0);
}