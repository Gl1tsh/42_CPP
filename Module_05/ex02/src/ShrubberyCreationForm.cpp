#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", target, 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& source) : AForm(source)
{

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

void ShrubberyCreationForm::execute(Bureaucrat& executor) const
{
	// Vérification si le formulaire est signé
	if (!this->getSigned())
		throw NotSignedException();

	// Vérification du grade de l'exécuteur
	if (executor.getGrade() > grade_to_execute)
		throw GradeTooLowException();

	// Création du fichier <target>_shrubbery
	std::ofstream ofs(target + "_shrubbery");
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
}
