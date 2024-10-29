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

void PmergeMe::splitList(std::list<int>& numbers, std::list<int>& leftPart, std::list<int>& rightPart)
{
	int size = numbers.size();
	int middle = size / 2;

	// Itérateur pour parcourir `numbers`
	std::list<int>::iterator it = numbers.begin();

	// Remplir `leftPart` avec la première moitié
	for (int i = 0; i < middle; i++)
	{
		leftPart.push_back(*it);
		it++;
	}

	// Remplir `rightPart` avec la deuxième moitié
	for (int i = middle; i < size; i++)
	{
		rightPart.push_back(*it);
		it++;
	}
}

// Fusionne deux listes triées en une seule liste triée
std::list<int> PmergeMe::mergeLists(std::list<int>& leftPart, std::list<int>& rightPart)
{
	// Liste fusionnée
	std::list<int> merged;

	std::list<int>::iterator leftIt = leftPart.begin();
	std::list<int>::iterator rightIt = rightPart.begin();

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
