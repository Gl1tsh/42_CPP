#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
	keys[0] = "DEBUG";
	keys[1] = "INFO";
	keys[2] = "WARNING";
	keys[3] = "ERROR";

	values[0] = &Harl::debug;
	values[1] = &Harl::info;
	values[2] = &Harl::warning;
	values[3] = &Harl::error;
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level == keys[i])
		{
			(this->*values[i])();
			return;
		}
	}
	std::cout << "Invalid Level" << std::endl;
}

void Harl::debug()
{
	std::cout << "I am debug" << std::endl;
}

void Harl::info()
{
	std::cout << "I am info" << std::endl;
}

void Harl::warning()
{
	std::cout << "I am warning" << std::endl;
}

void Harl::error()
{
	std::cout << "I am error" << std::endl;
}
