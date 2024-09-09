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
	try
	{
		char charValue = ParseChar(input);
		std::cout << "char: " << charValue << std::endl;
		std::cout << "int: " << static_cast<int>(charValue) << std::endl;
		std::cout << "float: " << static_cast<float>(charValue) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(charValue) << ".0" << std::endl;
		return;
	}
	catch (std::invalid_argument& e) {}
	try
	{
		int intValue = ParseInt(input);
		// check si le char est imprimable
		if (isprint(intValue))
			std::cout << "char: " << static_cast<char>(intValue) << std::endl;
		else
			std::cout << "char: impossible" << std::endl;

		std::cout << "int: " << intValue << std::endl;
		std::cout << "float: " << static_cast<float>(intValue) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(intValue) << ".0" << std::endl;
		return;
	}
	catch (std::invalid_argument& e) {}
	try
	{
		float floatValue = ParseFloat(input);
		// check si le char est imprimable
		if (isprint(static_cast<char>(floatValue)))
			std::cout << "char: " << static_cast<char>(floatValue) << std::endl;
		else
			std::cout << "char: impossible" << std::endl;

		// check si le int est dans les limites
		if (floatValue >= std::numeric_limits<int>::min() && floatValue <= std::numeric_limits<int>::max())
			std::cout << "int: " << static_cast<int>(floatValue) << std::endl;
		else
			std::cout << "int: impossible" << std::endl;

		std::cout << "float: " << floatValue << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(floatValue) << std::endl;
		return;
	}
	catch (std::invalid_argument& e) {}
	try
	{
		double doubleValue = ParseDouble(input);
		// check si le char est imprimable
		if (isprint(static_cast<char>(doubleValue)))
			std::cout << "char: " << static_cast<char>(doubleValue) << std::endl;
		else
			std::cout << "char: impossible" << std::endl;

		// check si le int est dans les limites
		if (doubleValue >= std::numeric_limits<int>::min() && doubleValue <= std::numeric_limits<int>::max())
			std::cout << "int: " << static_cast<int>(doubleValue) << std::endl;
		else
			std::cout << "int: impossible" << std::endl;

		// check si le float est dans les limites
		if (doubleValue >= std::numeric_limits<float>::min() && doubleValue <= std::numeric_limits<float>::max())
			std::cout << "float: " << static_cast<float>(doubleValue) << "f" << std::endl;
		else
			std::cout << "float: impossible" << std::endl;

		std::cout << "double: " << doubleValue << std::endl;

		return;
	}
	catch (std::invalid_argument& e) {}

	// si on arrive ici, c'est que la conversion est impossible car chaine vide ou pas parsable
	// pour etre parsable il faut que la string soit entirement lue correctement sans erreur
	// (exemple: "123" est parsable, "123a" ne l'est pas)
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

char ScalarConverter::ParseChar(const std::string& input)
{
	// check si le char est imprimable et si la string a une longueur de 1
	if (input.length() == 1 && isprint(input[0]))
		return input[0];
	throw std::invalid_argument("char: error: impossible");
}

int ScalarConverter::ParseInt(const std::string& input)
{
	errno = 0;
	char *end;
	long intValue = std::strtol(input.c_str(), &end, 10);

	if (*end == '\0' && errno == 0)
	{
		if (intValue >= std::numeric_limits<int>::min() && intValue <= std::numeric_limits<int>::max())
			return intValue;
	}
	throw std::invalid_argument("int: error: impossible");

}

float ScalarConverter::ParseFloat(const std::string& input)
{
	char *end;
	errno = 0;
	std::string inputCopy = input;

	if (input == "+inff" || input == "-inff" || input == "nanf")
		inputCopy.erase(inputCopy.end() - 1);
	float floatValue = std::strtof(inputCopy.c_str(), &end);

	if (end != inputCopy.c_str() && *end == '\0' && errno == 0)
		return floatValue;
	throw std::invalid_argument("float: error: impossible");
}

double ScalarConverter::ParseDouble(const std::string& input)
{
	char *end;
	errno = 0;
	double doubleValue = std::strtod(input.c_str(), &end);

	if (end != input.c_str() && *end == '\0' && errno == 0)
		return doubleValue;
	throw std::invalid_argument("double: error: impossible");
}
