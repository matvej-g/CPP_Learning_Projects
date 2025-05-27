#include <iostream>
#include "Sample_class.hpp"

Sample::Sample(void) {

	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;

	return;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;

	return;
}

int	Sample::getNbInst(void) {

	return Sample::_nbInst;	//this *, cant be used since there is no reference to it
}

int	Sample::_nbInst = 0;