#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
public:

	Intern();
	Intern(Intern& source);
	~Intern();
	Intern& operator=(Intern& source);

	AForm* makeForm(std::string form_name, std::string target);

private:

};

#endif
