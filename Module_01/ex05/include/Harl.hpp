#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
public:
	Harl();
	void complain(std::string level);

private:
	void debug();
	void info();
	void warning();
	void error();

	typedef void (Harl::*function_ptr)();
	std::string keys[4];
	function_ptr values[4];
};

#endif