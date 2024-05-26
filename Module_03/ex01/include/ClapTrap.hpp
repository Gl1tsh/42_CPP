#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
public:
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	bool alive() const;
	std::string getName();
	unsigned int getAttackDamage();


protected:
	unsigned int hitPoint;
	unsigned int energyPoint;
	unsigned int attackDamage;

private:
	std::string name;

};

#endif
