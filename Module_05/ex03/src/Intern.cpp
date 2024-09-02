#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern& source)
{
	*this = source;
}

Intern::~Intern()
{
}

Intern& Intern::operator=(Intern& source)
{
	if (this != &source)
	{
	}
	return *this;
}

AForm* Intern::makeForm(std::string form_name, std::string target)
{
	// creation de tablean de nom de formulaire
	std::string formNames[3];

	formNames[0] = "robotomy request";
	formNames[1] = "presidential pardon";
	formNames[2] = "shrubbery creation";

	// creation de tableau de pointeur de formulaire
	AForm* formObjects[3];

	formObjects[0] = new RobotomyRequestForm(target);
	formObjects[1] = new PresidentialPardonForm(target);
	formObjects[2] = new ShrubberyCreationForm(target);

	// recherche du bon formulaire dans le tableau
	AForm* form = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (form_name == formNames[i])
		{
			std::cout << "Intern creates " << form_name << std::endl;
			form = formObjects[i];
		}
		else
			delete formObjects[i];
	}
	// si pas trouver, afficher message d'erreur
	if (form == NULL)
		std::cout << "Intern cannot create " << form_name << std::endl;
	return form;
}
