#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string& name, int grade_to_sign, int grade_to_execute) :
_name(name), _is_signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	if (_grade_to_sign < 1 || _grade_to_execute < 1)
		throw GradeTooHighException();
	if (_grade_to_sign > 150 || _grade_to_execute > 150)
		throw GradeTooLowException();
	//std::cout << "Parameterized AForm constructor called." << std::endl;
}

AForm::~AForm() 
{
	//std::cout << "Form destructed." << std::endl;
}

std::string AForm::getName() const {
	return(_name);
}

bool AForm::getSigned() const{
	return(_is_signed);
}

int AForm::getGradeToSign() const {
	return(_grade_to_sign);
}

int AForm::getGradeToExecute() const {
	return(_grade_to_execute);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > getGradeToSign())
		throw GradeTooLowException();
	_is_signed = true;
}

void AForm::execute(Bureaucrat const &executor) const {
	if (!_is_signed)
		throw FormNotSignedException();
	if (executor.getGrade() > _grade_to_execute)
		throw GradeTooLowException();
	action();
}

std::ostream &operator<<(std::ostream &out, const AForm &aform) {
	out << "Form " << aform.getName()
		<< ", signed: " << (aform.getSigned() ? "yes" : "no")
		<< ", sign grade: " << aform.getGradeToSign()
		<< ", exec grade: " << aform.getGradeToExecute();
	return (out);
}