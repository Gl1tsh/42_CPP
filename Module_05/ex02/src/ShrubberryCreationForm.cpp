#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : grade_to_sign(145), grade_to_execute(137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& source)
{
	this->target = source.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& source)
{
	if (this != &source)
		is_signed = source.getSigned();
	return *this;
}

std::string ShrubberyCreationForm::getTarget()
{
	return this->target;
}

bool ShrubberyCreationForm::getSigned() const
{
	return is_signed;
}

bool ShrubberyCreationForm::getExecuted() const
{
	return is_executed;
}

int ShrubberyCreationForm::getGradeToSign()
{
	return this->grade_to_sign;
}

int ShrubberyCreationForm::getGradeToExecute()
{
	return this->grade_to_execute;
}

void ShrubberyCreationForm::execute(Bureaucrat& executor)
{
	// Vérification si le formulaire est signé
	if (!this->getSigned())
		throw std::runtime_error("Form must be signed before it can be executed.");

	// Vérification du grade de l'exécuteur
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();

	// Création du fichier <target>_shrubbery
	std::ofstream ofs(this->getTarget() + "_shrubbery");
	if (!ofs.is_open())
		throw std::runtime_error("File could not be opened.");

	// Écriture de l'arbre en ASCII dans le fichier
	ofs << "    *\n"
		<< "   ***\n"
		<< "  *****\n"
		<< " *******\n"
		<< "*********\n"
		<< "   |||\n";
	ofs.close();

	// Indication que l'exécution a été réussie
	std::cout << "ShrubberyCreationForm has been executed successfully by " << executor.getName() << "." << std::endl;
}

void ShrubberyCreationForm::beSigned(Bureaucrat& bureaucrat)
{
	// check si posssible de signer
	if (bureaucrat.getGrade() > grade_to_sign)
		throw GradeTooLowException();
	if (bureaucrat.getGrade() < grade_to_sign)
		throw GradeTooHighException();
	// si tout est bon, on lui dit que c'est bon
	is_signed = true;
}

void ShrubberyCreationForm::beExecuted(Bureaucrat& bureaucrat)
{
	// check si posssible d'executer
	if (bureaucrat.getGrade() > grade_to_execute)
		throw GradeTooLowException();
	if (bureaucrat.getGrade() < grade_to_execute)
		throw GradeTooHighException();
	// si tout est bon, on lui dit que c'est bon
	is_executed = true;
}

// pour faire des std::cout avec des objets de type Form
std::ostream& operator<<(std::ostream& output, ShrubberyCreationForm& source)
{
	output << "[the form named " << source.getName() << ", grade to sign : " << source.getGradeToSign() << ", grade to execute : " << source.getGradeToExecute() << "]";
	return output;
}