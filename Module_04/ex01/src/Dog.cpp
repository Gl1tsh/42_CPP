#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog : default constructor called" << std::endl;
	brain = new Brain;
}

Dog::Dog(Dog& source) : Animal(source)
{
	brain = new Brain(*source.brain);
	std::cout << "Dog : copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
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
