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

void ScalarConverter::convert(const std::string& what)
{
	// === Check si c'est un char et character imprimable
	if (what.length() == 1 && isprint(what[0]))
		std::cout << "char: " << what[0] << std::endl;
	else
		std::cout << "char: error: not a character" << std::endl;


	// === Check si c'est un int
	try
	{
		int value = std::stoi(what);
		std::cout << "int: " << value << std::endl;
	}
	catch (const std::invalid_argument&)
	{
        // Si la conversion échoue parce que la chaîne ne représente pas un nombre
		std::cout << "int: error: not a number" << std::endl;
	}
	catch (const std::out_of_range&)
	{
        // Si la conversion échoue parce que le nombre est trop grand pour être stocké dans un int
		std::cout << "int: error: out of range" << std::endl;
	}



	// === Check si c'est un float
	try
	{
		float value = std::stof(what);
		if (std::isinf(value))
			std::cout << "float: error: infinity (out of range)" << std::endl;
		else if (std::isnan(value))
			std::cout << "float: error: not a number" << std::endl;
		else
			std::cout << "float: " << value << std::endl;
	}
	catch (const std::out_of_range&)
	{
		// Si le nombre est bien trop grand niveau taille
		std::cout << "float: error: out of range" << std::endl;
	}
	catch (const std::invalid_argument&)
	{
        // Si la conversion échoue parce que la chaîne ne représente pas un nombre
		std::cout << "float: error: not a number" << std::endl;
	}

	// === Check si c'est un double 
	try
	{
		double value = std::stod(what);
		if (std::isinf(value))
			std::cout << "double: error: infinity (out of range)" << std::endl;
		else if (std::isnan(value))
			std::cout << "double: error: not a number" << std::endl;
		else
			std::cout << "double: " << value << std::endl;
	}
	catch (const std::out_of_range&)
	{
		std::cout << "double: error: out of range" << std::endl;
	}
	catch (const std::invalid_argument&)
	{
        // Si la conversion échoue parce que la chaîne ne représente pas un nombre
		std::cout << "double: error: not a number" << std::endl;
	}
}
