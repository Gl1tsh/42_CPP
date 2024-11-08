#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap& other);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& other);
	void attack(const std::string& target);
    void guardGate();

protected:



};

#endif
