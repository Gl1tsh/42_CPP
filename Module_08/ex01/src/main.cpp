#include "Span.hpp"
#include <iostream>

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);


		std::cout << "Shortest : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;

}