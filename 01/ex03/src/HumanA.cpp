#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string one_name, Weapon one_weapon)
{
	name = one_name;
	weapon = one_weapon;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
