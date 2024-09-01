#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
public:

	class GradeTooHighException : public std::exception
	{
	};

	class GradeTooLowException : public std::exception
	{
	};

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string name);
	ShrubberyCreationForm(ShrubberyCreationForm& source);
	~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(ShrubberyCreationForm& source);

	std::string getName();
	bool getSigned() const;
	bool getExecuted() const;
	int getGradeToSign();
	int getGradeToExecute();

	void beSigned(Bureaucrat& bureaucrat);
	void beExecuted(Bureaucrat& bureaucrat);

private:
	std::string name;
	bool is_signed;
	bool is_executed;
	int grade_to_sign = 145;
	int grade_to_execute = 137;

};

std::ostream& operator<<(std::ostream& output, ShrubberyCreationForm& source);

#endif