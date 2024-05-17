#include "Zombie.hpp"
#include <iostream>

int main()
{
	// create zombie on heap
	Zombie* chien;
	chien = newZombie("Jaques");
	chien->announce();
	delete chien;

	// zombie created on stack and auto-destroyed
	randomChump("Didier");

	return 0;
}
