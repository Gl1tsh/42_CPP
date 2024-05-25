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

bool ClapTrap::alive() const
{
	return this->hitPoint > 0;
}

void ClapTrap::attack(ClapTrap& target)
{
	if (target.alive())
		std::cout << name << " attack " << target.getName() << std::endl;
	else
		std::cout << name << " is dead, cannot attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->attackDamage = amount;
	this->hitPoint -= attackDamage;
	std::cout << name << " being attack" << std::endl; 
	if (hitPoint <= 0)
	{
		hitPoint = 0;
		std::cout << name << " he is dead" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (alive() && energyPoint > 0)
	{
		this->hitPoint += amount;
		this->energyPoint -= 1;

		std::cout << name << " heal : " << amount;
		std::cout << "| total energy point : " << energyPoint << std::endl;

		if (energyPoint <= 0)
			this->energyPoint = 0;
		if (hitPoint >= 10)
			this->hitPoint = 10;
		std::cout << name << " have now : " << hitPoint << " hitPoint" << std::endl;	
	}
	else if (!alive())
		std::cout << "the character is dead : cannot heal" << std::endl;
	else
		std::cout << "not enough energy point : cannot heal" << std::endl;
}
