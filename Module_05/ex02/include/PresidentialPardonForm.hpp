#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
public:

	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm& source);
	~PresidentialPardonForm();
	PresidentialPardonForm& operator=(PresidentialPardonForm& source);

	virtual void execute(Bureaucrat& executor) const;

private:

};

#endif