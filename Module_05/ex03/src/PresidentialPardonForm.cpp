#include "PresidentialPardonForm.hpp"
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Form", target, 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& source) : AForm(source)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& source)
{
	if (this != &source)
		is_signed = source.getSigned();
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat& executor) const
{
	// Vérification si le formulaire est signé
	if (!this->getSigned())
		throw NotSignedException();

	// Vérification du grade de l'exécuteur
	if (executor.getGrade() > grade_to_execute)
		throw GradeTooLowException();

	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
