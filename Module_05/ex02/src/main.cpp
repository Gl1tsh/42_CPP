#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

// CATASTROPHE : Savoir si le bureaucrate peut exécuter un formulaire non signé
void testBureaucratCantExecuteUnsignedForm()
{
	Bureaucrat sabushi("Sabushi", 150);
	ShrubberyCreationForm formulaire_1("Home");
	try
	{
		formulaire_1.execute(sabushi);

		std::cout << "ERROR: " << sabushi << " executed the " << formulaire_1 << " he shouldn't be able" << std::endl;
	}
	catch (AForm::GradeTooLowException& exception)
	{
		std::cout << "ERROR: " << sabushi << " couldn't execute " << formulaire_1 << " because grade is too low but it 150" << std::endl;
	}
	catch (AForm::NotSignedException& exception)
	{
		std::cout << "OK: " << sabushi << " couldn't execute " << formulaire_1 << " because form not signed" << std::endl;
	}
}

// CATASTROPHE : Savoir si le bureaucrate n'a pas le niveau pour executer le formulaire
void testBureaucratCantExecuteGradeTooLow()
{
	Bureaucrat sabushi("Sabushi", 150);
	Bureaucrat yoda("Yoda", 1);
	ShrubberyCreationForm formulaire_1("Home");
	formulaire_1.beSigned(yoda);
	try
	{
		formulaire_1.execute(sabushi);

		std::cout << "ERROR: " << sabushi << " executed the " << formulaire_1 << " he shouldn't be able" << std::endl;
	}
	catch (AForm::GradeTooLowException& exception)
	{
		std::cout << "OK: " << sabushi << " couldn't execute " << formulaire_1 << " because grade is too low" << std::endl;
	}
	catch (AForm::NotSignedException& exception)
	{
		std::cout << "ERROR: " << sabushi << " couldn't execute " << formulaire_1 << " because form not signed but it is by Yoda" << std::endl;
	}
}

// GOOD : Savoir si le formualire a bien été executé
void testExecuteGoodMessage()
{
	Bureaucrat sabushi("Sabushi", 4);
	ShrubberyCreationForm formulaire_1("Home");

	sabushi.signForm(formulaire_1);
	sabushi.executeForm(formulaire_1);
	std::cout << "GOOD : OK: executeForm already printed some messages" << std::endl;
}

// GOOD : Savoir si le formualire a bien été executé
void testExecuteFormBadMessage()
{
	Bureaucrat sabushi("Sabushi", 34);
	ShrubberyCreationForm formulaire_1("Home");

	// ne doit pas planter, car signForm possède son propre catch pour le message d'erreur
	std::cout << "testExecuteFormBadMessage: " << formulaire_1.getSigned() << std::endl;
	sabushi.executeForm(formulaire_1);
	std::cout << "BAD : OK: executeForm already printed some messages" << std::endl;
}

void testExecuteRobotOK()
{
	Bureaucrat sabushi("Sabushi", 4);
	RobotomyRequestForm formulaire_1("Home");

	sabushi.signForm(formulaire_1);
	for (int i = 0; i < 3; i++)
		sabushi.executeForm(formulaire_1);

}

void testExecutePresidentialOK()
{
	Bureaucrat sabushi("Sabushi", 4);
	PresidentialPardonForm formulaire_1("Home");

	sabushi.signForm(formulaire_1);
	sabushi.executeForm(formulaire_1);

}


int main()
{
	testBureaucratCantExecuteUnsignedForm();
	testBureaucratCantExecuteGradeTooLow();

	testExecuteGoodMessage();
	testExecuteFormBadMessage();

	testExecuteRobotOK();
	testExecutePresidentialOK();

	return 0;
}
