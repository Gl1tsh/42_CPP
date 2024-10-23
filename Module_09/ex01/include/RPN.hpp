#ifndef RPN_HPP

#include <stack>
#include <string>

class RPN
{
public:
	RPN();
	~RPN();
	void addNumber(std::string number);
	void addOperator(std::string operation);
	int calculate();

private:
	RPN(const RPN& source);
	RPN& operator=(const RPN& source);

	// creation d'un stack
	std::stack<std::string> stack;

};

#endif