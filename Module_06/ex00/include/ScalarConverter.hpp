#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter
{

public:
	ScalarConverter();
	ScalarConverter(ScalarConverter& source);
	~ScalarConverter();
	ScalarConverter& operator=(ScalarConverter& source);

	static void convert(const std::string& what);

private:
	std::string string_source;

};

#endif