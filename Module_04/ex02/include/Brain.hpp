#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
public:
	Brain();
	Brain(Brain& source);
	~Brain();
	Brain& operator=(Brain& source);

protected:
	std::string ideas[100];

};

#endif