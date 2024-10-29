#include "PmergeMe.hpp"
#include <iostream>

// forme coplien ===============================================================

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& source) : numbers(source.numbers), pairs(source.pairs)
{
}

PmergeMe& PmergeMe::operator=(const PmergeMe& source)
{
	if (this == &source)
	{
		numbers = source.numbers;
		pairs = source.pairs;
	}
	return *this;
}


// fonctions de gestion des nombres ============================================

void PmergeMe::setNumbers(const std::list<int>& nums)
{
    numbers = nums;
}

void PmergeMe::splitArray()
{
	// nettoyer les listes avant de commencer
	pairs.clear();

	std::list<int>::iterator it = numbers.begin();

	// boucle sur les nombres pour les diviser en paires, si le nombre d'éléments est impair, on ajoute -1 à la fin
	while (std::distance(it, numbers.end()) > 1)
	{
		// on prend les deux premiers éléments de la liste
		int first = *it;
		++it;
		int second = *it;
		++it;

		// on les ajoute à la liste des paires
		pairs.push_back(std::make_pair(first, second));
	}
	if (it != numbers.end())
		pairs.push_back(std::make_pair(*it, -1));
}

void PmergeMe::sortArray()
{
	for(std::list<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); ++it)
	{
		// -1 signifie qu'il n'y a pas de deuxième élément
		if (it->second != -1 && it->first > it->second)
			std::swap(it->first, it->second);
	}

	pairs.sort();
}

void PmergeMe::mergeArray()
{
	numbers.clear();

	// boucle sur les paires pour les ajouter à la liste des nombres
	for (std::list<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); ++it)
	{
		// on ajoute le premier élément de la paire
		numbers.push_back(it->first);
		// si le deuxième élément est différent de -1, on l'ajoute aussi, -1 signifie qu'il n'y a pas de deuxième élément
		if (it->second != -1)
			numbers.push_back(it->second);
	}
}

void PmergeMe::printArray()
{
	// affichage des nombres
	for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
		std::cout << *it << " ";

	std::cout << std::endl;

}
