#include "Span.hpp"
#include <exception>
#include <algorithm>
#include <limits>

Span::Span(int numberLimit)
{
	this->numberLimit = numberLimit;
}

Span::Span(const Span &source)
{
	this->numberLimit = source.numberLimit;
	this->numbers = source.numbers;
}

Span::~Span()
{

}

Span& Span::operator=(const Span &source)
{
	if (this == &source)
		return *this;
	this->numberLimit = source.numberLimit;
	this->numbers = source.numbers;
	return *this;
}

void Span::addNumber(int number)
{
	if (numbers.size() == numberLimit)
		throw std::exception();
	numbers.push_back(number);
}

int Span::shortestSpan()
{
	if (numbers.size() < 2)
		throw std::runtime_error("Not enough numbers to find a span.");

	// trie de la liste dans l'ordre croissant
	std::sort(numbers.begin(), numbers.end());

	// on initialise la valeur minimale à la plus grande valeur possible
	int minSpan = std::numeric_limits<int>::max();

	// on parcourt la liste pour trouver la différence minimale entre deux nombres
	for (size_t i = 1; i < numbers.size(); ++i)
	{
		int span = numbers[i] - numbers[i - 1];
		if (span < minSpan)
			// si la différence est plus petite que la précédente, on la remplace
			minSpan = span;
	}
	return minSpan;
}


int Span::longestSpan()
{
	if (numbers.size() < 2)
		throw std::runtime_error("Not enough numbers to find a span.");

	int minNumber = *std::min_element(numbers.begin(), numbers.end());
	int maxNumber = *std::max_element(numbers.begin(), numbers.end());

	return maxNumber - minNumber;
}

bool Span::compareNumbers(int a, int b)
{
	return a < b;
}
