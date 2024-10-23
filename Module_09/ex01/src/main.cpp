#include "RPN.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " <expression>" << std::endl;
		return 1;
	}

	std::string expression = argv[1];
	RPN rpn;
	
	for (std::string::iterator it = expression.end(); it != expression.begin(); --it)
	{
		if (*it == ' ')
			continue;
		if (*it >= '0' && *it <= '9')
			rpn.addNumber(*it);
		else if (*it == '+' || *it == '-' || *it == '*' || *it == '/')
			rpn.addOperator(*it);
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