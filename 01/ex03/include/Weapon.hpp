#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{

public:
	const std::string& getType(std::string type);
	std::string setType(std::string type);

private:
	std::string type;
};

#endif
