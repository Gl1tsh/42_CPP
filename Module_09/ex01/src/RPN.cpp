#include "RPN.hpp"
#include <iostream>
#include <sstream>

RPN::RPN()
{

}

RPN::~RPN()
{

}

RPN::RPN(const RPN& )
{

}

RPN& RPN::operator=(const RPN& )
{
	return *this;
}

// =========================================


// Convertit un int en chaine de caractère grace a un stringstream (putain de c++98)
std::string intToString(int number)
{
	std::stringstream string_stream;
	string_stream << number;
	return string_stream.str();
}

// Convertit une chaine de caractère en int
int convertInt(const std::string& input)
{
	errno = 0;
	char *end;
	long intValue = std::strtol(input.c_str(), &end, 10);

	if (*end == '\0' && errno == 0)
	{
		// On verifie si la valeur est dans les limites d'un int (min et max)
		if (intValue >= std::numeric_limits<int>::min() && intValue <= std::numeric_limits<int>::max())
			return intValue;
	}
	throw std::invalid_argument("int: error: impossible");
}

int RPN::calculate(std::string expression)
{
	std::cout << "Calculating..." << std::endl;

	std::stack<int> stack;
	int first;
	int second;
	int result;

	for (std::string::iterator it = expression.begin(); it != expression.end(); ++it)
	{
		if (*it == ' ')
			continue;
		// On verifie si le caractere est un chiffre
		if (*it >= '0' && *it <= '9')
			stack.push(convertInt(std::string(&*it, 1)));
		else if (*it == '+' || *it == '-' || *it == '*' || *it == '/')
		{
			// On verifie si on a assez d'operandes
			if (stack.size() < 2)
				throw std::runtime_error("Not enough operands");
			// On recupere les deux derniers operandes
			second = stack.top();
			stack.pop();
			first = stack.top();
			stack.pop();

			// On effectue l'operation
			if (*it == '+')
				result = first + second;
			else if (*it == '-')
				result = first - second;
			else if (*it == '*')
				result = first * second;
			else if (*it == '/')
				result = first / second;
			else
				throw std::runtime_error("Invalid operator: ");
			// On empile le resultat
			stack.push(result);
			std::cout << "Result: " << first << *it << second << " = " << result << std::endl;
		}
		else
			throw std::runtime_error("Invalid character");
	}
	// On verifie si on a trop d'operandes, et pas d'operateurs
	if (stack.size() != 1)
		throw std::runtime_error("Not enough operators");
	return stack.top();
}
