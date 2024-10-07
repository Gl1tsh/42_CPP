#include "AForm.hpp"

AForm::AForm()
{

}

AForm::AForm(const std::string name, std::string target, int grade_to_sign, int grade_to_execute) : name(name), target(target), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
	if (grade_to_sign < 1)
		throw GradeTooHighException();
	if (grade_to_sign > 150)
		throw GradeTooLowException();
	this->is_signed = false;

}

AForm::AForm(AForm& source) : name(source.name), target(source.target), grade_to_sign(source.grade_to_sign), grade_to_execute(source.grade_to_execute)
{

}

AForm::~AForm()
{
}

AForm& AForm::operator=(AForm& source)
{
	if (this != &source)
		is_signed = source.getSigned();
	return *this;
}

std::string AForm::getName()
{
	return this->name;
}

bool AForm::getSigned() const
{
	return is_signed;
}

int AForm::getGradeToSign()
{
	return this->grade_to_sign;
}

int AForm::getGradeToExecute()
{
	return this->grade_to_execute;
}

void AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > grade_to_sign)
		throw GradeTooLowException();
	is_signed = true;
}

// pour faire des std::cout avec des objets de type Form
std::ostream& operator<<(std::ostream& output, AForm& source)
{
	output << "[the form named " << source.getName() << ", grade to sign : " << source.getGradeToSign() << ", grade to execute : " << source.getGradeToExecute() << "]";
	return output;
}
