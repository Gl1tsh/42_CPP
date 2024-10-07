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
	Form(const std::string name, const int grade_to_sign, const int grade_to_execute);
	Form(Form& source);
	~Form();
	Form& operator=(Form& source);

	std::string getName();
	bool getSigned() const;
	int getGradeToSign();
	int getGradeToExecute();

	void beSigned(Bureaucrat& bureaucrat);

private:
	const std::string name;
	bool is_signed;
	const int grade_to_sign;
	const int grade_to_execute;

};

std::ostream& operator<<(std::ostream& output, Form& source);

#endif
