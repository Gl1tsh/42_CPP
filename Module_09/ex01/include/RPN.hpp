#ifndef RPN_HPP

#include <stack>
#include <string>

class RPN
{
public:
	RPN();
	~RPN();


private:
	RPN(const RPN& source);
	RPN& operator=(const RPN& source);

	// creation d'un stack
	std::stack<std::string> stack;

};

#endif