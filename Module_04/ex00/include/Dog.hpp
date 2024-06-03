#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{

public:
	Dog();
	Dog(Dog& source);
	~Dog();
	Dog& operator=(Dog& source);

protected:

};

#endif