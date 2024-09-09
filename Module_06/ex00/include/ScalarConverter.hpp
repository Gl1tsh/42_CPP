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

	static char ParseChar(const std::string& input);
	static int ParseInt(const std::string& input);
	static float ParseFloat(const std::string& input);
	static double ParseDouble(const std::string& input);

	std::string string_source;

};

#endif