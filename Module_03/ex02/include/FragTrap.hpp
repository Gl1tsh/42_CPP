#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap& other);
	~FragTrap();
	FragTrap& operator=(FragTrap& other);

    void highFivesGuys();

protected:



};

#endif
