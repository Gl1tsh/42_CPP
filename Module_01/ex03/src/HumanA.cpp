#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string one_name, Weapon& one_weapon) : weapon(one_weapon)
{
	name = one_name;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
