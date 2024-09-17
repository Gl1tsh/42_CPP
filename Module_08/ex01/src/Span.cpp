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
	int beforeNumber;
	int minOccurence = std::numeric_limits<int>::max();
	int occurence = 1;

	if (numbers.size() < 2)
		throw std::exception();

	std::sort(numbers.begin(), numbers.end(), Span::compareNumbers);
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		if (it == numbers.begin())
			beforeNumber = *it;
		
		if (*it == beforeNumber + 1)
			occurence++;
		else
		{
			minOccurence = occurence < minOccurence ? occurence : minOccurence;
			occurence = 1;
		}
		beforeNumber = *it;
	}
	return minOccurence;
}

int Span::longestSpan()
{
	int beforeNumber;
	int maxOccurence = 0;
	int occurence = 1;

	if (numbers.size() < 2)
		throw std::exception();

	std::sort(numbers.begin(), numbers.end(), Span::compareNumbers);
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		if (it == numbers.begin())
			beforeNumber = *it;
		
		if (*it == beforeNumber + 1)
			occurence++;
		else
		{
			maxOccurence = occurence > maxOccurence ? occurence : maxOccurence;
			occurence = 1;
		}
		beforeNumber = *it;
	}
	return maxOccurence;
}

bool Span::compareNumbers(int a, int b)
{
	return a < b;
}
