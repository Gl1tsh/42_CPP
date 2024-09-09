#include "ScalarConverter.hpp"
#include <iostream>
#include <string>


int main()
{
	// Test case for empty string
	std::cout << "\033[32m" << "TEST CASE FOR NOTHING STRING" << "\033[0m" << std::endl;
	std::cout << "Test avec rien:" << std::endl;
	ScalarConverter::convert("");
	std::cout << std::endl;

	// Test case for non-printable string
	std::cout << "\033[32m" << "TEST CASE FOR NON-PRINTABLE STRING" << "\033[0m" << std::endl;
	std::cout << "Test avec '\\n\\t':" << std::endl;
	ScalarConverter::convert("\n\t");
	std::cout << std::endl;

	// Test case for special
	std::cout << "\033[32m" << "TEST CASE FOR SPECIAL" << "\033[0m" <<  std::endl;
	std::cout << "Test avec '+inf':" << std::endl;
	ScalarConverter::convert("+inf");

	std::cout << "\nTest avec '-inf':" << std::endl;
	ScalarConverter::convert("-inf");

	std::cout << "\nTest avec 'nan':" << std::endl;
	ScalarConverter::convert("nan");

	std::cout << "\nTest avec '+inff':" << std::endl;
	ScalarConverter::convert("+inff");

	std::cout << "\nTest avec '-inff':" << std::endl;
	ScalarConverter::convert("-inff");

	std::cout << "\nTest avec 'nanf':" << std::endl;
	ScalarConverter::convert("nanf");
	std::cout << std::endl;

	// Test cases for char
	std::cout << "\033[32m" << "TEST CASE FOR CHAR" << "\033[0m" <<  std::endl;
	std::cout << "Test avec 'a':" << std::endl;
	ScalarConverter::convert("a");

	std::cout << "\nTest avec '9':" << std::endl;
	ScalarConverter::convert("9");

	std::cout << "\nTest avec 'coucou':" << std::endl;
	ScalarConverter::convert("coucou");
	std::cout << std::endl;

	// Test cases for int
	std::cout << "\033[32m" << "TEST CASE FOR INT" << "\033[0m" <<  std::endl;
	std::cout << "Test avec '123':" << std::endl;
	ScalarConverter::convert("123");

	std::cout << "\nTest avec '-123':" << std::endl;
	ScalarConverter::convert("-123");

	std::cout << "\nTest avec '999999999999999999999999999999' (int out of range):" << std::endl;
	ScalarConverter::convert("999999999999999999999999999999");

	std::cout << "\nTest avec '-999999999999999999999999999999' (int out of range):" << std::endl;
	ScalarConverter::convert("-999999999999999999999999999999");
	std::cout << std::endl;

	// Test cases for float
	std::cout << "\033[32m" << "TEST CASE FOR FLOAT" << "\033[0m" << std::endl;
	std::cout << "Test avec '123.456':" << std::endl;
	ScalarConverter::convert("123.456");

	std::cout << "\nTest avec '1e39' (float out of range):" << std::endl;
	ScalarConverter::convert("1e39");

	std::cout << "\nTest avec '-1e39' (float out of range):" << std::endl;
	ScalarConverter::convert("-1e39");
	std::cout << std::endl;

	// Test cases for double
	std::cout << "\033[32m" << "TEST CASE FOR DOUBLE" << "\033[0m" << std::endl;
	std::cout << "Test avec '1.7976931348623157e308' (double upper boundary):" << std::endl;
	ScalarConverter::convert("1.7976931348623157e308");

	std::cout << "\nTest avec '-1.7976931348623157e308' (double lower boundary):" << std::endl;
	ScalarConverter::convert("-1.7976931348623157e308");

	std::cout << "\nTest avec '1e309' (double out of range):" << std::endl;
	ScalarConverter::convert("1e309");

	std::cout << "\nTest avec '-1e309' (double out of range):" << std::endl;
	ScalarConverter::convert("-1e309");

	return 0;
}

/*
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
*/