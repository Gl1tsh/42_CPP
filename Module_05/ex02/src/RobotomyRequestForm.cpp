#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Creation Form", target, 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& source) : AForm(source)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& source)
{
	if (this != &source)
		is_signed = source.getSigned();
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat& executor) const
{
	std::cout << "RobotomyRequestForm<" << this << ">::execute(): " << is_signed << std::endl;

	// Vérification si le formulaire est signé
	if (!this->getSigned())
		throw NotSignedException();

	// Vérification du grade de l'exécuteur
	if (executor.getGrade() > grade_to_execute)
		throw GradeTooLowException();

	if (std::rand() % 2)
		std::cout << target << " has been robotomized successfully" << std::endl;
	else
		std::cout << target << " robotomization failed" << std::endl;	
}
