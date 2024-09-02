#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
public:

	class GradeTooHighException : public std::exception
	{
	};

	class GradeTooLowException : public std::exception
	{
	};

	class NotSignedException : public std::exception
	{
	};

	AForm();
	AForm(std::string name, std::string target, int grade_to_sign, int grade_to_execute);
	AForm(AForm& source);
	virtual ~AForm() = 0;
	AForm& operator=(AForm& source);

	std::string getName();
	bool getSigned() const;
	int getGradeToSign();
	int getGradeToExecute();

	void beSigned(Bureaucrat& bureaucrat);
	virtual void execute(Bureaucrat& executor) const = 0;

protected:
	std::string name;
	std::string target;
	bool is_signed;
	int grade_to_sign;
	int grade_to_execute;

};

std::ostream& operator<<(std::ostream& output, AForm& source);

#endif