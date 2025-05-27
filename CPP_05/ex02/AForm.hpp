#pragma once

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
private:
	std::string const	_name;
	bool				_is_signed;
	int const			_grade_to_sign;
	int const			_grade_to_execute;
	AForm()									= delete;
	AForm(const AForm& other)				= delete;
	AForm &operator=(const AForm& other)	= delete;

protected:
	virtual void action() const = 0;

public:
	AForm(const std::string& name, int grade_to_sign, int grade_to_execute);
	virtual ~AForm();

	std::string getName() const;
	bool		getSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;

	void		beSigned(const Bureaucrat &bureocrat);
	void		execute(const Bureaucrat &executor) const;

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
	class FormNotSignedException : public std::exception {
	public:
		virtual const char* what() const noexcept override {
			return "AForm: form not signed.";
		}
	};
};

std::ostream &operator<<(std::ostream &out, const AForm &aform);