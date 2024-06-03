#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Animal : default constructor called : " << std::endl;
}

Animal::Animal(Animal& source)
{
	std::cout << "Animal : copy constructor called : " << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal : destructor called : " << std::endl;
}

Animal& Animal::operator=(Animal& source)
{
	return *this;
}
