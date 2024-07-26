#include "Form.hpp"

Form::Form()
{

}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute)
{
	if (grade_to_sign < 1)
		throw GradeTooHighException();
	if (grade_to_sign > 150)
		throw GradeTooLowException();
	this->name = name;
	this->grade_to_sign = grade_to_sign;
	this->grade_to_execute = grade_to_execute;
}

Form::Form(Form& source)
{
	this->name = source.name;
	this->grade_to_sign = source.grade_to_sign;
	this->grade_to_execute = source.grade_to_execute;
}

Form::~Form()
{
}

Form& Form::operator=(Form& source)
{
	if (this != &source)
		is_signed = source.getSigned();
	return *this;
}

std::string Form::getName()
{
	return this->name;
}

bool Form::getSigned() const
{
	return is_signed;
}

int Form::getGradeToSign()
{
	return this->grade_to_sign;
}

int Form::getGradeToExecute()
{
	return this->grade_to_execute;
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > grade_to_sign)
		throw Form::GradeTooLowException();
	is_signed = true;
}

std::ostream& operator<<(std::ostream& output, Form& source)
{
	output << " the form named " << source.getName() << std::endl
	<< "Grade to sign : " << source.getGradeToSign() << std::endl
	<< "Grade to execute : " << source.getGradeToExecute() << std::endl;
	return output;
}