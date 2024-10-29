#include "PmergeMe.hpp"
#include <iostream>
#include <list>
#include <cstdlib> // pour std::atoi

int main(int argc, char* argv[]) {
	// Création de la classe de tri
	PmergeMe sorter;

	// Liste de nombres non triés
	std::list<int> numbers;

	// Parcourir les arguments de la ligne de commande pour les ajouter à la liste
	for (int i = 1; i < argc; ++i)
	{
		int num = std::atoi(argv[i]);
		numbers.push_back(num);
	}

	// Affichage de la liste avant le tri
	std::cout << "Before sorting: ";
	for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	// Appel de la fonction pour trier la liste
	sorter.processList(numbers);

	// Affichage de la liste après le tri
	std::cout << "After sorting: ";
	for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
		std::cout << *it << " ";

	std::cout << std::endl;

	return 0;
}
