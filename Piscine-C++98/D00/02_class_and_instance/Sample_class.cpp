#include <iostream>
#include "Sample_class.hpp"

Sample::Sample(void){

	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void){

	std::cout << "Destructor called" << std::endl;
	return;
}
