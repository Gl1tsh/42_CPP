#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

public:
	Dog();
	Dog(Dog& source);
	~Dog();
	Dog& operator=(Dog& source);

	void makeSound() const;

protected:

private:
	Brain* brain;

};

#endif