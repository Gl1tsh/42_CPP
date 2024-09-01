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
	ShrubberyCreationForm(std::string name, int grade_to_sign, int grade_to_execute);
	ShrubberyCreationForm(ShrubberyCreationForm& source);
	~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(ShrubberyCreationForm& source);

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

std::ostream& operator<<(std::ostream& output, ShrubberyCreationForm& source);

#endif