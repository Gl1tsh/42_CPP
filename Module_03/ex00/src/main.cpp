#include "ClapTrap.hpp"

int main()
{
	ClapTrap yuno("yuno");
	ClapTrap sabushi("sabushi");

	yuno.attack(sabushi);
	sabushi.takeDamage(15);
	sabushi.beRepaired(12);

	return 0;
}
