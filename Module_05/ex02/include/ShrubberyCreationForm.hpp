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
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm& source);
	~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(ShrubberyCreationForm& source);

	std::string getTarget();
	bool getSigned() const;
	bool getExecuted() const;
	int getGradeToSign();
	int getGradeToExecute();

	void execute(Bureaucrat& executor);

	void beSigned(Bureaucrat& bureaucrat);
	void beExecuted(Bureaucrat& bureaucrat);

private:
	std::string target;
	bool is_signed;
	bool is_executed;
	int grade_to_sign;
	int grade_to_execute;
};

std::ostream& operator<<(std::ostream& output, ShrubberyCreationForm& source);

#endif