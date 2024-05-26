#include "ClapTrap.hpp"
#include <iostream>


ClapTrap::ClapTrap(std::string name)
{
	std::cout << "constructor called : " << name << std::endl;
	this->name = name;
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called : " << name << std::endl;
}

std::string ClapTrap::getName()
{
	return this->name;
}

unsigned int ClapTrap::getAttackDamage()
{
	return this->attackDamage;
}

bool ClapTrap::alive() const
{
	return this->hitPoint > 0;
}

void ClapTrap::attack(const std::string& target)
{
	if (alive() && energyPoint != 0)
	{
		energyPoint -= 1;
		std::cout << name << " attack " << target;
		std::cout << " | total energy point : " << energyPoint << std::endl;
	}
	else if (!alive())
		std::cout << name << " is dead, cannot attack" << std::endl;
	else
		std::cout << "not enough energy point : cannot attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name << " being attack and take : " << amount << " damage" << std::endl;
	if (hitPoint <= amount)
	{
		hitPoint = 0;
		std::cout << name << " he is dead" << std::endl;
	}
	else
	{
		this->hitPoint -= amount;
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

		if (hitPoint >= 10)
			this->hitPoint = 10;
		std::cout << name << " have now : " << hitPoint << " hitPoint" << std::endl;	
	}
	else if (!alive())
		std::cout << "the character is dead : cannot heal" << std::endl;
	else
		std::cout << "not enough energy point : cannot heal" << std::endl;
}
