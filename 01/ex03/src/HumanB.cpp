#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string one_name)
{
	name = one_name;
}

void HumanB::setWeapon(Weapon& the_weapon)
{
	weapon = &the_weapon;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
