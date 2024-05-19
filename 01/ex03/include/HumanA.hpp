#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{

public:
	HumanA(Weapon weapon);
	void attack();

private:
	Weapon weapon;
	std::string name;

};

#endif
