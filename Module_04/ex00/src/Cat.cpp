#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat : default constructor called : " << std::endl;
}

Cat::Cat(Cat& source) : Animal(source)
{
	std::cout << "Cat : copy constructor called : " << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat : destructor called : " << std::endl;
}

Cat& Cat::operator=(Cat& )
{
	return *this;
}
