#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

public:
	Cat();
	Cat(Cat& source);
	~Cat();
	Cat& operator=(Cat& source);

	void makeSound() const;


protected:

private:
	Brain* brain;

};

#endif