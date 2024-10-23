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

void RPN::addNumber(std::string number)
{
	std::cout << "Adding number: " << number << std::endl;
	stack.push(number);
}

void RPN::addOperator(std::string operation)
{
	std::cout << "Adding operator: " << operation << std::endl;
	stack.push(operation);
}

int RPN::calculate()
{
	std::cout << "Calculating..." << std::endl;
	int first;
	int second;
	std::string operation;
	int result;

	// check si la stack peux continuer de calculer (1 correspond au resultat final)
	while (stack.size() != 1)
	{
		// On recupere les 2 premiers elements de la stack
		first = convertInt(stack.top());
		stack.pop();
		second = convertInt(stack.top());
		stack.pop();
		// On recupere l'operation
		operation = stack.top();
		stack.pop();

		// On effectue l'operation
		if (operation == "+")
			result = first + second;
		else if (operation == "-")
			result = first - second;
		else if (operation == "*")
			result = first * second;
		else if (operation == "/")
			result = first / second;
		else
			throw std::runtime_error("Invalid operator: " + operation);

		// On ajoute le resultat de l'operation a la stack
		stack.push(intToString(result));
		std::cout << "result of : " << first << operation << second << " = " << result << std::endl;
	}

	return convertInt(stack.top());
}
