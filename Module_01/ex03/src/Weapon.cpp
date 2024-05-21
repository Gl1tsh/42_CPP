#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string the_type)
{
	type = the_type;
}

const std::string& Weapon::getType()
{
	return type;
}

void Weapon::setType(std::string the_type)
{
	type = the_type;
}
