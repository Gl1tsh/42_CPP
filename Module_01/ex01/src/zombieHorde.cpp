
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N];
	Zombie* horde_total = horde;

	while (N >= 0)
	{
		horde->setName(name);
		horde++;
		N--;
	}

	return horde_total;
}
