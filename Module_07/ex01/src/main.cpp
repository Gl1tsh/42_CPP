#include <iostream>
#include "Iter.hpp"

int main()
{
	int array_int[] = {1, 2, 3, 4, 5};
	char array_char[] = {'a', 'b', 'c', 'd', 'e'};
	std::string array_string[] = {"un,", " deux,", " trois,", " quatre,", " cinque"};

	/*
	utilisation du template iter pour afficher les éléments des tableaux ainsi que print

	iter ressemble est setup comme cela :
	void iter(Type *array, int lenght, void (*function)(Type const &))
	donc ici on a un tableau de int, un tableau de char et un tableau de string

	pour etre plus opti, il faudrait egalement une fonction pour trouver la longeur total de chaque tableau
	pour eviter d'ecrire 5 a chaque fois par exemple.
	*/

	iter(array_int, 5, print);
	std::cout << std::endl;
	iter(array_char, 5, print);
	std::cout << std::endl;
	iter(array_string, 5, print);
	std::cout << std::endl;

	return 0;
}