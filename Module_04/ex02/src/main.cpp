#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>


int main()
{
	Animal* animals[4];

	// La preuve que la classe Animal est devenu abstraite
	//mettre en commentaire pour compiler.
	const Animal* meta = new Animal();

	for (int i = 0; i < 2; i++)
		animals[i] = new Dog;
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat;
	for (int i = 0; i < 4; i++)
		delete animals[i];

	return 0;
}
