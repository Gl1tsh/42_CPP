#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

int	ask_number(std::string question, int max_number)
{
	std::string answer;

	while (true)
	{
		std::cout << question << "?: ";
		std::getline(std::cin, answer);
		std::istringstream iss(answer);
		int number;
		if (iss >> number)
		{
			if (number >= 0 && number < max_number)
				return number;
		}
	}
}

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

std::string cut_too_long(std::string string_to_cut)
{
	if (string_to_cut.length() > 10)
		return string_to_cut.substr(0, 9) + '.';
	else
		return string_to_cut;
}

void print_search_header()
{
	std::cout << std::string(53, '=') << std::endl;
	std::cout << "| " << std::setw(10) << "INDEX"
			  << " | " << std::setw(10) << "FirstName"
			  << " | " << std::setw(10) << "LastName"
			  << " | " << std::setw(10) << "Nickname"
			  << " |" << std::endl;
	std::cout << std::string(53, '=') << std::endl;
}

void print_contact_for_search(int index, Contact one_contact)
{
	std::cout << "| " << std::setw(10) << index;
	std::cout << " | " << std::setw(10) << cut_too_long(one_contact.getFirstname());
	std::cout << " | " << std::setw(10) << cut_too_long(one_contact.getLastname());
	std::cout << " | " << std::setw(10) << cut_too_long(one_contact.getNickname());
	std::cout << " |" << std::endl;
}

void print_contact(Contact one_contact)
{
	std::cout << "FirstName       : " << one_contact.getFirstname() << std::endl;
	std::cout << "LastName        : " << one_contact.getLastname() << std::endl;
	std::cout << "Nickname        : " << one_contact.getNickname() << std::endl;
	std::cout << "Phone Number    : " << one_contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret  : " << one_contact.getDarkestSecret() << std::endl;
}
