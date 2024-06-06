#include "ScavTrap.hpp"
#include "ui.hpp"

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

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	ClapTrap::operator=(other);
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	print_scavtrap_attack();
	ClapTrap::attack(target);
}


void ScavTrap::guardGate()
{
	std::cout << getName();
	print_scavtrap_guardGate();

}
