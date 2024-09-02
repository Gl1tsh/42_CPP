#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
	Intern esclave;
	AForm* form;

	// Fonctionne
	form = esclave.makeForm("robotomy request", "Bender");
	delete form;

	form = esclave.makeForm("presidential pardon", "Bender");
	delete form;
	
	form = esclave.makeForm("shrubbery creation", "Bender");
	delete form;
	
	// Erreur test
	form = esclave.makeForm("chocolat request", "Bender");

	return 0;
}
