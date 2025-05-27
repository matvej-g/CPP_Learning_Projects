#pragma once

#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string const	_target;

protected:
	void action() const override;

public:
	explicit PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& other) = delete;
	PresidentialPardonForm &operator=(const PresidentialPardonForm& other) = delete;
	~PresidentialPardonForm() override;
};