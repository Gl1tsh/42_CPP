#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called : " << getName() << std::endl;
}

FragTrap::FragTrap(FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called : " << getName() << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap overload constructor called : " << getName() << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called : " << getName() << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& other)
{
	std::cout << "FragTrap operator called : " << getName() << std::endl;
	ClapTrap::operator=(other);
	return *this;
}


void FragTrap::highFivesGuys()
{
	std::cout << getName() << " give me five " << std::endl;
}
