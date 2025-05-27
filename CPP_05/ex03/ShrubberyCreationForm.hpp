#pragma once

#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	std::string const	_target;

protected:
	void action() const override;

public:
	explicit ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other) = delete;
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm& other) = delete;
	~ShrubberyCreationForm() override;
};
