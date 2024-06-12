#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>

class AMateria
{
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria& other);
	AMateria operator=(AMateria& other);
	~AMateria();
	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
protected:
	
};

#endif