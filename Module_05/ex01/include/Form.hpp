#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
public:

	class GradeTooHighException : public std::exception
	{
	};

	class GradeTooLowException : public std::exception
	{
	};

	Form();
	Form(std::string name, int grade_to_sign, int grade_to_execute);
	Form(Form& source);
	~Form();
	Form& operator=(Form& source);

	std::string getName();
	bool getSigned() const;
	int getGradeToSign();
	int getGradeToExecute();

	void beSigned(Bureaucrat& bureaucrat);

private:
	std::string name;
	bool is_signed;
	int grade_to_sign;
	int grade_to_execute;

};

std::ostream& operator<<(std::ostream& output, Form& source);

#endif