#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
{
	this->name = name;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& source)
{
	this->name = source.name;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& source)
{
	if (this != &source)
		is_signed = source.getSigned();
	return *this;
}

std::string ShrubberyCreationForm::getName()
{
	return this->name;
}

bool ShrubberyCreationForm::getSigned() const
{
	return is_signed;
}

bool ShrubberyCreationForm::getExecuted() const
{
	return is_executed;
}

int ShrubberyCreationForm::getGradeToSign()
{
	return this->grade_to_sign;
}

int ShrubberyCreationForm::getGradeToExecute()
{
	return this->grade_to_execute;
}

void ShrubberyCreationForm::beSigned(Bureaucrat& bureaucrat)
{
	// check si posssible de signer
	if (bureaucrat.getGrade() > grade_to_sign)
		throw GradeTooLowException();
	if (bureaucrat.getGrade() < grade_to_sign)
		throw GradeTooHighException();
	// si tout est bon, on lui dit que c'est bon
	is_signed = true;
}

void ShrubberyCreationForm::beExecuted(Bureaucrat& bureaucrat)
{
	// check si posssible d'executer
	if (bureaucrat.getGrade() > grade_to_execute)
		throw GradeTooLowException();
	if (bureaucrat.getGrade() < grade_to_execute)
		throw GradeTooHighException();
	// si tout est bon, on lui dit que c'est bon
	is_executed = true;
}

// pour faire des std::cout avec des objets de type Form
std::ostream& operator<<(std::ostream& output, ShrubberyCreationForm& source)
{
	output << "[the form named " << source.getName() << ", grade to sign : " << source.getGradeToSign() << ", grade to execute : " << source.getGradeToExecute() << "]";
	return output;
}