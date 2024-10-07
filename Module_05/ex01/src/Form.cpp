#include "Form.hpp"

Form::Form(const std::string name, const int grade_to_sign, const int grade_to_execute) : name(name), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
	if (grade_to_sign < 1)
		throw GradeTooHighException();
	if (grade_to_sign > 150)
		throw GradeTooLowException();
}

Form::Form(Form& source) : name(source.name), grade_to_sign(source.grade_to_sign), grade_to_execute(source.grade_to_execute)
{
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
		throw GradeTooLowException();
	is_signed = true;
}

// pour faire des std::cout avec des objets de type Form
std::ostream& operator<<(std::ostream& output, Form& source)
{
	output << "[the form named " << source.getName() << ", grade to sign : " << source.getGradeToSign() << ", grade to execute : " << source.getGradeToExecute() << "]";
	return output;
}