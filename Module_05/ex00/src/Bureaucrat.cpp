#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat()
{
	this->name = "Alain";
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->name = name;
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat& source)
{
	this->name = source.name;
	this->grade = source.grade;	
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& source)
{
	this->name = source.name;
	this->grade = source.grade;	
	return *this;
}

void Bureaucrat::incrementGrade()
{
	if (this->grade <= 1)
		throw GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->grade >= 150)
		throw GradeTooLowException();
	this->grade++;
}


Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& source)
{
	output << source.getName() << ", bureaucrat grade " << source.getGrade();
	return output;
}
