#include "ClapTrap.hpp"
#include <iostream>


ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoint = 10;
	this->energyPoint = 10;
}

std::string ClapTrap::getName()
{
	return this->name;
}

void ClapTrap::attack(ClapTrap& target)
{
	std::cout << name << " attack " << target.getName() << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->attackDamage = amount;
	this->hitPoint -= attackDamage;
	std::cout << name << " being attack" << std::endl; 
	if (hitPoint == 0)
		std::cout << " and he is dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << name << " heal : " << amount << std::endl;
	this->hitPoint += amount;
	if (hitPoint >= 10)
		this->hitPoint = 10;
	std::cout << name << " have now : " << hitPoint << " hitPoint" << std::endl;	
}
