#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap yuno("yuno");
	ClapTrap sabushi("sabushi");

	yuno.attack(sabushi.getName());
	sabushi.takeDamage(yuno.getAttackDamage());
	sabushi.beRepaired(12);
	sabushi.attack(yuno.getName());
	yuno.guardGate();

	return 0;
}
