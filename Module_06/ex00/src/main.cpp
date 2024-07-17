#include "ScalarConverter.hpp"
#include <iostream>
#include <string>

/*
int main()
{
	// Test cases for char
	std::cout << "Test avec 'a':" << std::endl;
	ScalarConverter::convert("a");

	std::cout << "\nTest avec '9':" << std::endl;
	ScalarConverter::convert("9");

	std::cout << "\nTest avec '@':" << std::endl;
	ScalarConverter::convert("@");

	// Test case for non-printable char
	std::cout << "\nTest avec '\\n' (non-printable character):" << std::endl;
	ScalarConverter::convert("\n");

	// Test cases for int
	std::cout << "\nTest avec '123':" << std::endl;
	ScalarConverter::convert("123");

	std::cout << "\nTest avec '-123':" << std::endl;
	ScalarConverter::convert("-123");

	std::cout << "\nTest avec '999999999999999999999999999999' (int out of range):" << std::endl;
	ScalarConverter::convert("999999999999999999999999999999");

	std::cout << "\nTest avec '-999999999999999999999999999999' (int out of range):" << std::endl;
	ScalarConverter::convert("-999999999999999999999999999999");

	// Test cases for float
	std::cout << "\nTest avec '123.456':" << std::endl;
	ScalarConverter::convert("123.456");

	std::cout << "\nTest avec '1e39' (float out of range):" << std::endl;
	ScalarConverter::convert("1e39");

	std::cout << "\nTest avec '-1e39' (float out of range):" << std::endl;
	ScalarConverter::convert("-1e39");

	// Test cases for double
	std::cout << "\nTest avec '1.7976931348623157e308' (double upper boundary):" << std::endl;
	ScalarConverter::convert("1.7976931348623157e308");

	std::cout << "\nTest avec '-1.7976931348623157e308' (double lower boundary):" << std::endl;
	ScalarConverter::convert("-1.7976931348623157e308");

	std::cout << "\nTest avec '1e309' (double out of range):" << std::endl;
	ScalarConverter::convert("1e309");

	std::cout << "\nTest avec '-1e309' (double out of range):" << std::endl;
	ScalarConverter::convert("-1e309");

	return 0;
}
*/

int main(int argc, char** argv)
{
	if (argc < 2) 
	{
		std::cerr << "Usage: " << argv[0] << " <value>" << std::endl;
		return 1;
	}

	for (int i = 1; i < argc; ++i)
	{
		std::cout << "\nTest avec '" << argv[i] << "':" << std::endl;
		ScalarConverter::convert(argv[i]);
	}

	return 0;
}
