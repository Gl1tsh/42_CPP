#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
	Zombie();
	~Zombie();
	void announce();
	void setName(std::string a_name);

private:
	std::string name;
		
};

Zombie* zombieHorde(int N, std::string name);

#endif
