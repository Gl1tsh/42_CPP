#include "PmergeMe.hpp"
#include <iostream>
#include <list>
#include <climits> // pour INT_MAX
#include <cerrno> // pour errno
#include <cstring> // pour std::strtol
#include <ctime>

int main(int argc, char **argv)
{
	// Création de la classe de tri
	PmergeMe sorter;

	// Liste de nombres non triés
	std::list<int> numbers;
	std::vector<int> numbers_vector;

	// Parcourir les arguments de la ligne de commande pour les ajouter à la liste
	for (int i = 1; i < argc; ++i)
	{
		long num = std::strtol(argv[i], NULL, 10);
		if (errno != 0 || num < 0 || num > INT_MAX)
		{
			std::cerr << "Error" << std::endl;
			return 1;
		}
		numbers.push_back(num);
		numbers_vector.push_back(num);
	}


	// list ========================================================================
	// Affichage de la liste avant le tri
	std::cout << "Before sorting:   ";
	for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	// Appel de la fonction pour trier la liste
	clock_t start = clock();
	sorter.processList(numbers);
	clock_t end = clock();

	// Affichage de la liste après le tri
	std::cout << "After sorting:    ";
	for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	// convertis unite de temps en secondes
	// CLOCK_PER_SEC est une constante qui represente le nombre de ticks par seconde (depend de l'OS et de machine)
	// std::cout << "Time list : " << (double)(end - start) / CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
	std::cout << "Time to process a range of " << numbers.size() << " elements with std::list :    " << (double)(end - start) / CLOCKS_PER_SEC * 1000000 << " us" << std::endl;



	// vector ========================================================================
	start = clock();
	sorter.processVector(numbers_vector);
	end = clock();

	// convertis unite de temps en secondes
	// CLOCK_PER_SEC est une constante qui represente le nombre de ticks par seconde (depend de l'OS et de machine)
	std::cout << "Time to process a range of " << numbers_vector.size() << " elements with std::vector :  " << (double)(end - start) / CLOCKS_PER_SEC * 1000000 << " us" << std::endl;

	return 0;
}
