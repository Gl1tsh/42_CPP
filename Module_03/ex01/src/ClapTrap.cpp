#include "ClapTrap.hpp"
#include "ui.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	print_default_constructor_claptrap(name);
}

ClapTrap::ClapTrap(std::string name)
{
	print_overload_constructor_claptrap(name);
	this->name = name;
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}


ClapTrap::ClapTrap(ClapTrap& other)
{
	print_copy_constructor_claptrap(name);
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
}


ClapTrap::~ClapTrap()
{
	print_destructor_claptrap(name);
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	print_operator_claptrap(name);
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	return *this;
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
		print_attack(name, target);
		print_total_energy_point(energyPoint);
	}
	else if (!alive())
		print_dead_attack(name);
	else
		print_no_energy_point_for_attack(name);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	print_take_damage(name, amount);
	if (hitPoint <= amount)
	{
		hitPoint = 0;
		print_dead(name);
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

		print_heal(name, amount);
		print_total_energy_point(energyPoint);

		if (hitPoint >= 10)
			this->hitPoint = 10;
		print_hitpoint_left(name, hitPoint);
	}
	else if (!alive())
		print_dead_attack(name);
	else
		print_dead_heal(name);
}
