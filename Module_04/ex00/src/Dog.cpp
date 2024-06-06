#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog : default constructor called" << std::endl;
}

Dog::Dog(Dog& source) : Animal(source)
{
	std::cout << "Dog : copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog : destructor called" << std::endl;
}

Dog& Dog::operator=(Dog& source)
{
	Animal::operator=(source);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "waouf" << std::endl;
}
