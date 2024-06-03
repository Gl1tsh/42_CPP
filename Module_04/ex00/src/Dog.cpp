#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog : default constructor called : " << std::endl;
}

Dog::Dog(Dog& source) : Animal(source)
{
	std::cout << "Dog : copy constructor called : " << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog : destructor called : " << std::endl;
}

Dog& Dog::operator=(Dog& )
{
	return *this;
}
