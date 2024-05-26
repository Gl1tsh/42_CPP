#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap yuno("yuno");
	FragTrap kyioshi("kyioshi");
	ClapTrap sabushi("sabushi");

	yuno.attack(sabushi.getName());
	sabushi.takeDamage(yuno.getAttackDamage());
	sabushi.beRepaired(12);
	sabushi.attack(yuno.getName());
	yuno.guardGate();

	return 0;
}
