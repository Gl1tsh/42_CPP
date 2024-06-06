#include "ui.hpp"
#include "ClapTrap.hpp"


// Coplien ========================
void print_default_constructor(std::string name)
{
	std::cout << "default constructor called : " << name << std::endl;
}

void print_overload_constructor(std::string name)
{
	std::cout << "overload constructor called : " << name << std::endl;
}

void print_copy_constructor(std::string name)
{
	std::cout << "copy constructor called : " << name << std::endl;
}

void print_destructor(std::string name)
{
	std::cout << "destructor called : " << name << std::endl;
}

void print_operator(std::string name)
{
	std::cout << "operator called : " << name << std::endl;
}



// Activity ========================

void print_attack(std::string name, const std::string& target)
{
	std::cout << name << " attack " << target;
}

void print_take_damage(std::string name, unsigned int amount)
{
	std::cout << name << " being attack and take : " << amount << " damage" << std::endl;
}

void print_total_energy_point(unsigned int energyPoint)
{
	std::cout << " | total energy point : " << energyPoint << std::endl;
}

void print_heal(std::string name, unsigned int amount)
{
	std::cout << name << " heal : " << amount;
}

void print_no_energy_point_for_attack(std::string name)
{
		std::cout << name << " not enough energy point : cannot attack" << std::endl;
}

void print_no_energy_point_for_heal(std::string name)
{
	std::cout << name << " not enough energy point : cannot heal" << std::endl;
}

void print_hitpoint_left(std::string name, unsigned int hitPoint)
{
	std::cout << name << " have now : " << hitPoint << " hitPoint" << std::endl;
}


// dead ========================

void print_dead(std::string name)
{
	std::cout << name << " he is dead" << std::endl;
}

void print_dead_attack(std::string name)
{
	std::cout << name << " is dead, cannot attack" << std::endl;
}

void print_dead_heal(std::string name)
{
	std::cout << name << " is dead : cannot heal" << std::endl;
}