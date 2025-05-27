#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default"), _is_signed(false), _grade_to_sign(150), _grade_to_execute(150)
{
	std::cout << "Default Form constructor called." << std::endl;
}

Form::Form(const std::string& name, int grade_to_sign, int grade_to_execute) :
_name(name), _is_signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	if (_grade_to_sign < 1 || _grade_to_execute < 1)
		throw Form::GradeTooHighException();
	if (_grade_to_sign > 150 || _grade_to_execute > 150)
		throw Form::GradeTooLowException();
	std::cout << "Parameterized Form constructor called." << std::endl;
}

Form::Form(const Form& other) :
_name(other._name), _is_signed(other._is_signed), _grade_to_sign(other._grade_to_sign), _grade_to_execute(other._grade_to_execute)
{
	std::cout << "Form copy constructed." << std::endl;
}

Form &Form::operator=(const Form& other)
{
	if (this != &other) {
		_is_signed = other._is_signed;
	}
	std::cout << "Form assigned."<< std::endl;
	return (*this);
}

Form::~Form() 
{
	std::cout << "Form destructed." << std::endl;
}

std::string Form::getName() const {
	return(_name);
}

bool Form::getSigned() const{
	return(_is_signed);
}

int Form::getGradeToSign() const {
	return(_grade_to_sign);
}

int Form::getGradeToExecute() const {
	return(_grade_to_execute);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > getGradeToSign())
		throw GradeTooLowException();
	_is_signed = true;
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
	out << "Form " << form.getName()
		<< ", signed: " << (form.getSigned() ? "yes" : "no")
		<< ", sign grade: " << form.getGradeToSign()
		<< ", exec grade: " << form.getGradeToExecute();
	return (out);
}