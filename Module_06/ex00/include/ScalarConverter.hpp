#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter
{

public:
	static void convert(const std::string& what);

private:
	ScalarConverter();
	ScalarConverter(ScalarConverter& source);
	~ScalarConverter();
	ScalarConverter& operator=(ScalarConverter& source);

	std::string string_source;

};

#endif