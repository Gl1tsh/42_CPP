#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
	void announce();
	void setName(std::string a_name);

private:
	std::string name;
		
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
