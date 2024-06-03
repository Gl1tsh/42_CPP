#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{

public:
	Animal();
	Animal(Animal& source);
	virtual ~Animal();
	Animal& operator=(Animal& source);

	std::string getType() const;
	virtual void makeSound() const;

protected:
	std::string type;

};

#endif