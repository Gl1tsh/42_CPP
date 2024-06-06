#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat : default constructor called" << std::endl;
	brain = new Brain;
}

Cat::Cat(Cat& source) : Animal(source)
{
	brain = new Brain(*source.brain);
	std::cout << "Cat : copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat : destructor called" << std::endl;
}

Cat& Cat::operator=(Cat& source)
{
	Animal::operator=(source);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "miaouw" << std::endl;
}
