#include "Span.hpp"
#include <iostream>

int main()
{
	try
	{
		Span sp = Span(100);
		sp.addNumber(-2);
		sp.addNumber(0);
		sp.addNumber(-1);
		sp.addNumber(4);
		sp.addNumber(3);

		sp.addNumber(21);
		sp.addNumber(24);
		sp.addNumber(20);

		sp.addNumber(30);
		sp.addNumber(1);

		std::cout << "Shortest : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;

}