#ifndef RPN_HPP

#include <stack>
#include <string>

class RPN
{
public:
	RPN();
	~RPN();
	int calculate(std::string expression);

private:
	RPN(const RPN& source);
	RPN& operator=(const RPN& source);

};

#endif