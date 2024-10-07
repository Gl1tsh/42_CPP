#include "Bureaucrat.hpp"
#include <iostream>

void testRegularConstruct()
{
	try
	{
		Bureaucrat sabushi("Sabushi", 10);
		std::cout << "OK: Constructed with 10 and did not throw exception." << std::endl;
	}
	catch (std::exception& exception)
	{
		std::cout << "ERROR: Constructed with 10 and did throw invalid exception." << std::endl;
	}
}

void testInvalidConstructTooLow()
{
	try
	{
		Bureaucrat sabushi("Sabushi", 151);
		std::cout << "ERROR: Constructed with 151 and did not throw exception." << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& exception)
	{
		std::cout << "ERROR: Constructed with 151 and did throw invalid exception." << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& exception)
	{
		std::cout << "OK: Constructed with 151 and did throw exception." << std::endl;
	}
}

void testInvalidConstructTooHigh()
{
	try
	{
		Bureaucrat sabushi("Sabushi", -2);
		std::cout << "ERROR: Constructed with -2 and did not throw exception." << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& exception)
	{
		std::cout << "ERROR: Constructed with -2 and did throw invalid exception." << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& exception)
	{
		std::cout << "OK: Constructed with -2 and did throw exception." << std::endl;
	}
}

void testInvalidDecrement()
{
	Bureaucrat sabushi("Sabushi", 1);
	try
	{
		sabushi.incrementGrade();
		std::cout << "ERROR: Incremented from value 1 to 0" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& exception)
	{
		std::cout << "ERROR: Incremented from value 1 to 0 but caught GradeTooLowException" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& exception)
	{
		std::cout << "OK: Incremented from value 1 to 0 and caught GradeTooHighException" << std::endl;
	}
}

void testInvalidIncrement()
{
	Bureaucrat sabushi("Sabushi", 150);
	try
	{
		sabushi.decrementGrade();
		std::cout << "ERROR: Decremented from value 150 to 151" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& exception)
	{
		std::cout << "ERROR: Decremented from value 150 to 151 but caught GradeTooHighException" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& exception)
	{
		std::cout << "OK: Decremented from value 150 to 151 and caught GradeTooLowException" << std::endl;
	}
}

void testRegularDecrement()
{
	Bureaucrat sabushi("Sabushi", 20);
	try
	{
		sabushi.decrementGrade();
		std::cout << "OK: Decremented from value 20 to 21" << std::endl;
	}
	catch (std::exception& exception)
	{
		std::cout << "ERROR: Decremented from value 20 to 21 but caught an exception" << std::endl;
	}
}

void testRegularIncrement()
{
	Bureaucrat sabushi("Sabushi", 20);
	try
	{
		sabushi.incrementGrade();
		std::cout << "OK: Incremented from value 20 to 19" << std::endl;
	}
	catch (std::exception& exception)
	{
		std::cout << "ERROR: Incremented from value 20 to 19 but caught an exception" << std::endl;
	}
}


int main()
{
	testRegularConstruct();
	testInvalidConstructTooLow();
	testInvalidConstructTooHigh();
	testRegularIncrement();
	testRegularDecrement();
	testInvalidIncrement();
	testInvalidDecrement();

	try
	{
		Bureaucrat perso("salut", 20);
		Bureaucrat le_connard_de_la_compta;

		std::cout << "constructor default : " << le_connard_de_la_compta.getName() << std::endl;

		Bureaucrat perso_chiant("salut", 0);
	}
	catch (std::exception& e)
	{
		std::cout << "Erreur << entre chaise et ecrant>>: t'a fais une erreur de connard" << std::endl;
	}
	

	return 0;
}