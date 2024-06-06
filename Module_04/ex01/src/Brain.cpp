#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain : default constructor called" << std::endl;
}

Brain::Brain(Brain& )
{
	std::cout << "Brain : copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain : destructor called" << std::endl;
}

Brain& Brain::operator=(Brain& )
{
	return *this;
}
