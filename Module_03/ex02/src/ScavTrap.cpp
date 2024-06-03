#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called : " << getName() << std::endl;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called : " << getName() << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}


ScavTrap::ScavTrap(ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap constructor called : " << getName() << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called : " << getName() << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& other)
{
	ClapTrap::operator=(other);
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap attacking... " << std::endl;
	ClapTrap::attack(target);
}


void ScavTrap::guardGate()
{
	std::cout << getName() << " is now in Gatekeeper mode" << std::endl;
}
