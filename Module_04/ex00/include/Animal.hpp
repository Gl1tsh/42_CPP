#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{

public:
	Animal();
	Animal(Animal& source);
	~Animal();
	Animal& operator=(Animal& source);

	std::string getType() const;
	void makeSound() const;

protected:
	std::string type;

};

#endif