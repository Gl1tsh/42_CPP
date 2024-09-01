#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int grade_to_sign, int grade_to_execute)
{
	// verifie si les grade peuvent signer
	if (grade_to_sign < 145)
		throw GradeTooHighException();
	if (grade_to_sign > 145)
		throw GradeTooLowException();
	// verifie si les grade peuvent executer
    if (grade_to_execute < 137)
		throw GradeTooHighException();
	if (grade_to_execute > 137)
		throw GradeTooLowException();
	// si tout est bon, on initialise les attributs
	this->name = name;
	this->grade_to_sign = grade_to_sign;
	this->grade_to_execute = grade_to_execute;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& source)
{
	this->name = source.name;
	this->grade_to_sign = source.grade_to_sign;
	this->grade_to_execute = source.grade_to_execute;
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
	if (bureaucrat.getGrade() > grade_to_sign)
		throw GradeTooLowException();
	if (bureaucrat.getGrade() < grade_to_sign)
		throw GradeTooHighException();
	is_signed = true;
}

// pour faire des std::cout avec des objets de type Form
std::ostream& operator<<(std::ostream& output, ShrubberyCreationForm& source)
{
	output << "[the form named " << source.getName() << ", grade to sign : " << source.getGradeToSign() << ", grade to execute : " << source.getGradeToExecute() << "]";
	return output;
}