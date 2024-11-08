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

	try
	{
		int result = rpn.calculate(argv[1]);
		std::cout << "Result: " << result << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}
	return 0;
}