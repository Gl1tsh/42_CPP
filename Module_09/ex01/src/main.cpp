#include "RPN.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << "<expression>" << std::endl;
		return 1;
	}

	std::string expression = argv[1];
	RPN rpn;
	
	for (std::string::reverse_iterator it = expression.rbegin(); it != expression.rend(); ++it)
	{
		if (*it == ' ')
			continue;
		if (*it >= '0' && *it <= '9')
			// std::string(&*it, 1) c'est pour convertir un char en string
			rpn.addNumber(std::string(&*it, 1));
		else if (*it == '+' || *it == '-' || *it == '*' || *it == '/')
			rpn.addOperator(std::string(&*it, 1));
		else
		{
			std::cerr << "Invalid character: " << *it << std::endl;
			return 1;
		}
	}

	try
	{
		int result = rpn.calculate();
		std::cout << "Result: " << result << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}
	return 0;
}