#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
public:

	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm& source);
	~RobotomyRequestForm();
	RobotomyRequestForm& operator=(RobotomyRequestForm& source);

	virtual void execute(Bureaucrat& executor) const;

private:

};

#endif