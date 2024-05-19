#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{

public:
	HumanB();
	void attack();

private:
	Weapon weapon;
	std::string name;

};

#endif
