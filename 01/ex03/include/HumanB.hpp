#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>

class HumanB
{

public:
	HumanB();
	void attack(std::string weapon_type);

private:
	std::string Weapon;
	std::string name;

};

#endif
