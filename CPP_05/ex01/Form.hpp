#pragma once

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_is_signed;
	int const			_grade_to_sign;
	int const			_grade_to_execute;


public:
	Form();
	Form(const std::string& name, int grade_to_sign, int grade_to_execute);
	Form(const Form& other);
	Form &operator=(const Form& other);
	~Form();

	std::string getName() const;
	bool		getSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;

	void		beSigned(const Bureaucrat &bureocrat);
	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const noexcept override {
			return "Form grade too high!";
		}
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const noexcept override {
			return "Form grade too low!";
		}
	};
};

std::ostream &operator<<(std::ostream &out, const Form &form);