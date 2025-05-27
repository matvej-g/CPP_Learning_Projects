#pragma once

#include <string>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string const _target;

protected:
	void action() const override;

public:
	explicit RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& other) = delete;
	RobotomyRequestForm &operator=(const RobotomyRequestForm& other) = delete;
	~RobotomyRequestForm() override;
};