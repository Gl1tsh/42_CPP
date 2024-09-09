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
	// ============= Check si c'est un char et character imprimable
	if (input.length() == 1 && isprint(input[0]))
		std::cout << "char: " << input[0] << std::endl;
	else
		std::cout << "char: error: impossible" << std::endl;


	// ============= Check si c'est un int (strol)
	errno = 0;
	char *end;
	long intValue = std::strtol(input.c_str(), &end, 10);

	if (*end == '\0' && errno == 0)
		std::cout << "int: " << intValue << std::endl;
	else
		std::cout << "int: error: impossible " << std::endl;

	// ============= Check si c'est un float
	errno = 0;
	std::string inputCopy = input;
	if (input == "+inff" || input == "-inff" || input == "nanf")
		inputCopy.erase(inputCopy.end() - 1);
	float floatValue = std::strtof(inputCopy.c_str(), &end);

	if (end != inputCopy.c_str() && *end == '\0' && errno == 0)
		std::cout << "float: " << floatValue << "f" << std::endl;
	else
		std::cout << "float: error: impossible" << std::endl;

	// ============= Check si c'est un double
	errno = 0;
	double doubleValue = std::strtod(input.c_str(), &end);

	if (end != input.c_str() && *end == '\0' && errno == 0)
		std::cout << "double: " << doubleValue << std::endl;
	else
		std::cout << "double: error: impossible" << std::endl;
}
