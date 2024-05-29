#include "Zombie.hpp"
#include <iostream>

const int NUMBER_OF_ZOMBIE = 10;

int main()
{
	Zombie* horde;

	horde = zombieHorde(NUMBER_OF_ZOMBIE, "Didier");

	for (int i = 0; i < NUMBER_OF_ZOMBIE; i++)
		horde[i].announce();

	delete [] horde;

	return 0;
}
