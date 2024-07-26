#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include "Form.hpp"
#include <string>

class Form;

class Bureaucrat
{
public:

	class GradeTooHighException : public std::exception
	{
	};

	class GradeTooLowException : public std::exception
	{
	};

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat& source);
	Bureaucrat& operator=(Bureaucrat& source);
	~Bureaucrat();

	void incrementGrade();
	void decrementGrade();

	std::string getName() const;
	int getGrade() const;

	void signForm(Form& form);

private:
	std::string name;
	int grade;

};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& source);

#endif