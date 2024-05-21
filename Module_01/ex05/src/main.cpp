#include "Harl.hpp"
#include <iostream>
#include <string>

int main()
{
	Harl test;
	
	// Working
	test.complain("ERROR");
	test.complain("WARNING");
	test.complain("INFO");
	test.complain("DEBUG");

	// test zone failure (4 test)
	test.complain("BUG");
	test.complain("DE");
	test.complain("");
	test.complain("235724509238470");

	return 0;
}