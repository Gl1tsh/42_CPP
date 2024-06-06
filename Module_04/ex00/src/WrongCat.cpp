#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat : default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat& source) : WrongAnimal(source)
{
	std::cout << "WrongCat : copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat& source)
{
	WrongAnimal::operator=(source);
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "miaouw" << std::endl;
}
