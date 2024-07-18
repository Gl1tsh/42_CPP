#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade)
{

}

Bureaucrat::Bureaucrat(Bureaucrat& source)
{

}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& source)
{
	return *this;
}

Bureaucrat::~Bureaucrat()
{

}

void Bureaucrat::GradeTooHighException()
{
	std::cout << "Grade is to high" << std::endl;

}

void Bureaucrat::GradeTooLowException()
{
	std::cout << "Grade is to low" << std::endl;
}

std::string Bureaucrat::getName()
{
	return this->name;
}

int Bureaucrat::getGrade()
{

}
