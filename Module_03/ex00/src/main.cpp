#include "ClapTrap.hpp"

int main()
{
	ClapTrap yuno("yuno");
	ClapTrap sabushi("sabushi");

	yuno.attack(sabushi);
	sabushi.takeDamage(3);
	sabushi.beRepaired(15);

	return 0;
}
