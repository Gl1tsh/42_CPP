#include "Zombie.hpp"
#include <iostream>

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string a_name)
{
	name = a_name;
}
