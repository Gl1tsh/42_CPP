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


// Split la liste en deux parties, gauche et droite, a gauche les elements de 0 a middle-1, a droite les elements de middle a size-1
void PmergeMe::splitList(const std::list<int>& numbers, std::list<int>& leftPart, std::list<int>& rightPart) {

	int middle = numbers.size() / 2;
	std::list<int>::const_iterator it = numbers.begin();

	// Remplir `leftPart` avec la première moitié de `numbers`
	for (int i = 0; i < middle; i++)
	{
		leftPart.push_back(*it);
		it++;
	}

	// Remplir `rightPart` avec la seconde moitié de `numbers`
	for (; it != numbers.end(); it++)
		rightPart.push_back(*it);
}

// Fusionne deux listes triées en une seule liste triée
std::list<int> PmergeMe::mergeLists(const std::list<int>& leftPart, const std::list<int>& rightPart)
{
	// Liste fusionnée
	std::list<int> merged;

	std::list<int>::const_iterator leftIt = leftPart.begin();
	std::list<int>::const_iterator rightIt = rightPart.begin();

	// Fusion des deux listes triées
	while (leftIt != leftPart.end() && rightIt != rightPart.end())
	{
		if (*leftIt < *rightIt)
		{
			merged.push_back(*leftIt);
			leftIt++;
		}
		else
		{
			merged.push_back(*rightIt);
			rightIt++;
		}
	}

	// Ajouter les éléments restants de `leftPart`
	while (leftIt != leftPart.end())
	{
		merged.push_back(*leftIt);
		leftIt++;
	}

	// Ajouter les éléments restants de `rightPart`
	while (rightIt != rightPart.end())
	{
		merged.push_back(*rightIt);
		rightIt++;
	}

	return merged;
}

void PmergeMe::processList(std::list<int>& numbers)
{
	// Si la liste est vide ou ne contient qu'un seul élément, rien à faire
	if (numbers.size() <= 1)
		return;

	// Diviser la liste en deux parties
	std::list<int> leftPart, rightPart;
	splitList(numbers, leftPart, rightPart);

	// Appliquer récursivement `processList` sur chaque partie
	processList(leftPart);
	processList(rightPart);

	// Fusionner les deux parties triées
	numbers = mergeLists(leftPart, rightPart);
}