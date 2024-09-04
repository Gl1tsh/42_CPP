#include "ScalarConverter.hpp"
#include <iostream>
#include <cctype>
#include <stdexcept>
#include <cmath>
#include <limits>

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(ScalarConverter& source)
{
	(void) source;
}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter& ScalarConverter::operator=(ScalarConverter& source)
{
	(void) source;
	return *this;
}

void ScalarConverter::convert(const std::string& input)
{
	if (input == "+inf" || input == "-inf" || input == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "float: " << input << "f" << std::endl;
		std::cout << "double: " << input << std::endl;
		return;
	}

	if (input == "-inff" || input == "+inff" || input == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "float: " << input.substr(0, input.length() - 1) << "f" << std::endl;
		std::cout << "double: " << input.substr(0, input.length() - 1) << std::endl;
		return;
	}

	// ============= Check si c'est un char et character imprimable
	if (input.length() == 1 && isprint(input[0]) && !isdigit(input[0]))
		std::cout << "char: " << input[0] << std::endl;
	else
		std::cout << "char: error: not a character" << std::endl;


	// ============= Check si c'est un int (strol)
	char *end;
	errno = 0;
	long intValue = std::strtol(input.c_str(), &end, 10);

	if (*end == '\0' && errno == 0)
		std::cout << "int: " << intValue << std::endl;
	else
		std::cout << "int: error: not a int" << std::endl;

	// ============= Check si c'est un float
	errno = 0;
	float floatValue = std::strtof(input.c_str(), &end);

	if (*end == '\0' && errno == 0)
		std::cout << "float: " << floatValue << "f" << std::endl;
	else
		std::cout << "float: error: not a float" << std::endl;

	// ============= Check si c'est un double 
	errno = 0;
	double doubleValue = std::strtod(input.c_str(), &end);

	if (*end == '\0' && errno == 0)
		std::cout << "double: " << doubleValue << std::endl;
	else
		std::cout << "double: error: not a double" << std::endl;
}
