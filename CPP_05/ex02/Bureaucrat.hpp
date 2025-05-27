#pragma once

#include <string>
#include <iostream>
#include <exception>

class AForm;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat &operator=(const Bureaucrat& other);
	~Bureaucrat();

	std::string	getName() const;
	int			getGrade() const;
	void		incrementGrade();
	void		decrementGrade();
	void		signForm(AForm &aform);
	void		executeForm(const AForm& form) const;

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const noexcept override {
			return "Bureaucrat grade too high!";
		}
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const noexcept override {
			return "Bureaucrat grade too low!";
		}
	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);
