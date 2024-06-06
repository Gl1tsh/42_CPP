#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{

public:
	WrongAnimal();
	WrongAnimal(WrongAnimal& source);
	~WrongAnimal();
	WrongAnimal& operator=(WrongAnimal& source);

	std::string getType() const;
	void makeSound() const;

protected:
	std::string type;

};

#endif