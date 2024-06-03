#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	type = "random animal";
	std::cout << "Animal : default constructor called : " << std::endl;
}

Animal::Animal(Animal& source)
{
	type = source.type;
	std::cout << "Animal : copy constructor called : " << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal : destructor called : " << std::endl;
}

Animal& Animal::operator=(Animal& source)
{
	type = source.type;
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "Can't make sound!!!" << std::endl;
}
