#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	type = "random WrongAnimal";
	std::cout << "WrongAnimal : default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& source)
{
	type = source.type;
	std::cout << "WrongAnimal : copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal : destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& source)
{
	type = source.type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Can't make sound!!!" << std::endl;
}
