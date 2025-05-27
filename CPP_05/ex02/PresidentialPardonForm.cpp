#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
	: AForm("PresidentialPardonForm", 25, 5)
	, _target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{
	//std::cout << "PresidentialPardonForm destructed." << std::endl;
}

void PresidentialPardonForm::action() const {
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

