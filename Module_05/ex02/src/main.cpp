#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

// CATASTROPHE : dois print OK si le formulaire est signer par un con trop bas level par rapport au formulaire
void testBeSignedFormWhenBureaucratTooLow()
{
	Bureaucrat sabushi("Sabushi", 15);
	Form formulaire_1("Formulaire_1", 14, 16);
	try
	{
		formulaire_1.beSigned(sabushi);

		std::cout << "ERROR: " << sabushi << " signed the " << formulaire_1 << " he shouldn't be able" << std::endl;
	}
	catch (Form::GradeTooHighException& exception)
	{
		std::cout << "ERROR: " << sabushi << " couldn't sign " << formulaire_1 << " because grade is too HIGH" << std::endl;
	}
	catch (Form::GradeTooLowException& exception)
	{
		std::cout << "OK: " << sabushi << " couldn't sign " << formulaire_1 << " because grade is too LOW" << std::endl;
	}
}

// dois fonctionner normalement, print OK si le formulaire est signer par un con qui a le level requis
void testBeSignedFormWhenBureaucratOK()
{
	Bureaucrat sabushi("Sabushi", 15);
	Form formulaire_1("Formulaire_1", 15, 16);
	try
	{
		formulaire_1.beSigned(sabushi);

		std::cout << "OK: " << sabushi << " signed the " << formulaire_1 << std::endl;
	}
	catch (Form::GradeTooHighException& exception)
	{
		std::cout << "ERROR: " << sabushi << " couldn't sign " << formulaire_1 << " because grade is too HIGH" << std::endl;
	}
	catch (Form::GradeTooLowException& exception)
	{
		std::cout << "ERROR: " << sabushi << " couldn't sign " << formulaire_1 << " because grade is too LOW" << std::endl;
	}
}

// CATASTROPHE : le formulaire est out range (low) pour etre signer
void testFormInvalidConstructTooLow()
{
	try
	{
		Bureaucrat sabushi("Sabushi", 150);
		Form formulaire_1("Formulaire_1", 151, 16);

		std::cout << "ERROR: " << formulaire_1 << " Constructed with 151 and did not throw exception." << std::endl;
	}
	catch (Form::GradeTooHighException& exception)
	{
		std::cout << "ERROR: Constructed with 151 and did throw invalid exception." << std::endl;
	}
	catch (Form::GradeTooLowException& exception)
	{
		std::cout << "OK: Constructed with 151 and did throw exception." << std::endl;
	}
}

// CATASTROPHE : le formulaire est out range (high) pour etre signer
void testFormInvalidConstructTooHigh()
{
	try
	{
		Bureaucrat sabushi("Sabushi", 150);
		Form formulaire_1("Formulaire_1", -1, 16);

		std::cout << "ERROR: " << formulaire_1 << " Constructed with -1 and did not throw exception." << std::endl;
	}
	catch (Form::GradeTooHighException& exception)
	{
		std::cout << "OK: Constructed with -1 and did throw invalid exception." << std::endl;
	}
	catch (Form::GradeTooLowException& exception)
	{
		std::cout << "ERROR: Constructed with -1 and did throw exception." << std::endl;
	}
}

// OK : le formulaire est signer par un con qui a le level requis
void testSignFormGoodMessage()
{
	Bureaucrat sabushi("Sabushi", 4);
	Form formulaire_1("Formulaire_1", 20, 16);

	sabushi.signForm(formulaire_1);
	std::cout << "OK: signForm already printed some messages" << std::endl;
}

// OK : le formulaire est signer par un con qui a PAS le level requis
void testSignFormBadMessage()
{
	Bureaucrat sabushi("Sabushi", 34);
	Form formulaire_1("Formulaire_1", 20, 16);

	// ne dois pas planter, car signForm possede sont propre catch pour le message d'erreur
	sabushi.signForm(formulaire_1);
	std::cout << "OK: signForm already printed some messages" << std::endl;
}

int main()
{
	testBeSignedFormWhenBureaucratTooLow();
	testBeSignedFormWhenBureaucratOK();
	testFormInvalidConstructTooLow();
	testFormInvalidConstructTooHigh();
	testSignFormGoodMessage();
	testSignFormBadMessage();

	return 0;
}
