#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:
	WrongCat();
	WrongCat(WrongCat& source);
	~WrongCat();
	WrongCat& operator=(WrongCat& source);

	void makeSound() const;


protected:

};

#endif