#include "ClapTrap.hpp"

int main()
{
	ClapTrap yuno("yuno");
	ClapTrap sabushi("sabushi");

	yuno.attack(sabushi.getName());
	sabushi.takeDamage(yuno.getAttackDamage());
	sabushi.beRepaired(10);
	sabushi.attack(yuno.getName());

	return 0;
}
