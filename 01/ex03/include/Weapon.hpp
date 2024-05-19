#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{

public:
	Weapon();
	Weapon(std::string type);
	const std::string& getType();
	void setType(std::string type);

private:
	std::string type;
};

#endif


/*

Memo getter and setter

for get : need to return something and nothing as parameters
for set : 90% do not return something, add one parameters is the new value


*/