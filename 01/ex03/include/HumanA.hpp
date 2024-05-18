#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>

class HumanA
{

public:
	HumanA(std::string wich_weapon);
	void attack(std::string weapon_type);

private:
	std::string Weapon;
	std::string name;

};

#endif
