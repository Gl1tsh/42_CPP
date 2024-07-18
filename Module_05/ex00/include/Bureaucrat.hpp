#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>

class Bureaucrat
{
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat& source);
	Bureaucrat& operator=(Bureaucrat& source);
	~Bureaucrat();

	void GradeTooHighException();
	void GradeTooLowException();

	std::string getName();
	int getGrade();

private:
	const std::string name;
	int grade[150];

};

#endif