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
	std::string firstname, lastname, nickname, phone_number, darkest_secret;

	firstname = ask("What is your firstname");
	lastname = ask("What is your lastname");
	nickname = ask("What is your nickname");
	phone_number = ask("What is your phone_number");
	darkest_secret = ask("What is your darkest_secret");

	return 0;
}
