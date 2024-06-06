#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include <iostream>


int main()
{
	std::cout << "====== Constructor zone ======" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl << "====== Sound zone ======" << std::endl;
	std::cout << std::endl << dog->getType() << " sound is : ";
	dog->makeSound();

	std::cout << std::endl << cat->getType() << " sound is : ";
	cat->makeSound(); //will output the cat sound!

	std::cout << std::endl << meta->getType() << " sound is : ";
	meta->makeSound();

	std::cout << std::endl << "====== Destructor zone ======" << std::endl;
	delete cat;
	delete dog;
	delete meta;

	std::cout << std::endl << "====== wrong zone ======" << std::endl;
	const WrongAnimal* w_meta = new WrongAnimal();
	const WrongAnimal* w_cat = new WrongCat();

	std::cout << std::endl << w_cat->getType() << " sound is : ";
	w_cat->makeSound();

	std::cout << std::endl << w_meta->getType() << " sound is : ";
	w_meta->makeSound();

	std::cout << std::endl;
	delete w_cat;
	delete w_meta;


	return 0;
}
