#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : name("Alain"), grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat& source) : name(source.name), grade(source.grade)
{
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& source)
{
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
	output << "[" << source.getName() << ", bureaucrat grade " << source.getGrade() << "]";
	return output;
}

void Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signed "  << form << std::endl;
	}
	catch (AForm::GradeTooLowException& exception)
	{
		std::cout << *this << " couldn’t sign "  << form << " because form Grade Too Low" << std::endl;
	}
}

void Bureaucrat::executeForm(AForm& form)
{
	try
	{
		form.execute(*this);
		std::cout << *this << " executed "  << form << std::endl;
	}
	catch (AForm::GradeTooLowException& exception)
	{
		std::cout << *this << " couldn’t execute "  << form << " because form Grade Too Low" << std::endl;
	}
	catch (AForm::NotSignedException& exception)
	{
		std::cout << *this << " couldn’t execute "  << form << " because form not signed" << std::endl;
	}
}
