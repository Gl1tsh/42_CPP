#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
public:
	Span(int numberLimit);
	Span(const Span &source);
	~Span();
	Span& operator=(const Span &source);

	void addNumber(int number);
	int shortestSpan();
	int longestSpan();

private:
	unsigned int numberLimit;
	std::vector<int> numbers;

	static bool compareNumbers(int a, int b);

};

#endif