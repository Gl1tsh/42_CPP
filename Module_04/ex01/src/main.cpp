#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>


int main()
{
	Animal* animals[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Dog;

	for (int i = 5; i < 10; i++)
		animals[i] = new Cat;

	std::cout << std::endl;

	Cat copycat = static_cast<Cat&>(*animals[9]);

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete animals[i];


	return 0;
}
