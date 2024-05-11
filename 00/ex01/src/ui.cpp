#include <string>
#include <iostream>
#include "Contact.hpp"

std::string ask(std::string question)
{
	std::string answer;

	do
	{
		std::cout << question << "?: ";
		std::getline(std::cin, answer);
		// https://stackoverflow.com/questions/6444842/efficient-way-to-check-if-stdstring-has-only-spaces
	} while (answer.find_first_not_of(" \t\n\r\f\v") == std::string::npos);

	return answer;
}

Contact ask_contact()
{
	std::string firstname, lastname, nickname, phone_number, darkest_secret;

	firstname = ask("What is your firstname");
	lastname = ask("What is your lastname");
	nickname = ask("What is your nickname");
	phone_number = ask("What is your phone_number");
	darkest_secret = ask("What is your darkest_secret");

	return Contact(firstname, lastname, nickname, phone_number, darkest_secret);
}

void print_contact_for_search(int index, Contact one_contact)
{
	std::cout << index << " ";
	std::cout << one_contact.getFirstname() << " ";
	std::cout << one_contact.getLastname() << " ";
	std::cout << one_contact.getNickname() << " ";
	std::cout << std::endl;
}

void print_contact(Contact one_contact)
{
	std::cout << one_contact.getFirstname() << std::endl;
	std::cout << one_contact.getLastname() << std::endl;
	std::cout << one_contact.getNickname() << std::endl;
	std::cout << one_contact.getPhoneNumber() << std::endl;
	std::cout << one_contact.getDarkestSecret() << std::endl;
}
