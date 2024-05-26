#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called : " << getName() << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}
void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap attacking... " << std::endl;
	ClapTrap::attack(target);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called : " << getName() << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << getName() << " is now in Gatekeeper mode" << std::endl;
}
