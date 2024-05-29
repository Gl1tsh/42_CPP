#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << ": George A Romero set me free..." << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string a_name)
{
	name = a_name;
}
