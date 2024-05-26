#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called : " << getName() << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called : " << getName() << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << getName() << " give me five " << std::endl;
}
