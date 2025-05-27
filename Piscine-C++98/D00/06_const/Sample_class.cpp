#include <iostream>
#include "Sample_class.hpp"

Sample::Sample(float const f) : pi(f), qd(42) {		//initializing member, pi and qd, (f is not assigned to pi attribute, but pi attribute is assigned to f value)

	//this->qd = 0;  possible to assign qd here, because its not const
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar(void) const{	//bar function const keyword tells, member function shouldnt change in the program, make it more robust

	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	//this->qd = 0;  cant assign qd here, because of const keyword;
	return;
}
