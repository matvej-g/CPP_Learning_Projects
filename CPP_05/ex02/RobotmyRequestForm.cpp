#include "RobotmyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("RobotomyRequestForm", 72, 45)
	, _target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{
	//std::cout << "RobotomyRequest Form destructed." << std::endl;
}

void RobotomyRequestForm::action() const {
	std::cout	<< "*makes drilling noise*\n";
	if (std::rand() % 2) 
		std::cout << _target << " has been robotomized successfully.\n";
	else
		std::cout << _target << " robotomy failed.\n";
	
}