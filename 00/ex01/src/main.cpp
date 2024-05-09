#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

std::string ask(std::string question)
{
	std::string answer;
	std::cout << question << "?: ";
	std::cin >> answer;
	return answer;
}

int main(int argc, char **argv)
{
	std::string firstname;

	firstname = ask("What is your firstname");

	return 0;
}
