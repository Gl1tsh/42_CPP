#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "ui.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	PhoneBook perso = PhoneBook();

	std::string command;
	do
	{
		std::cout << std::endl << "Type your command (ADD, SEARCH, EXIT) : ";
		std::getline(std::cin, command);
		if (command == "ADD")
			perso.addContact(ask_contact());
		else if (command == "SEARCH")
		{
			std::cout << std::endl;
			print_search_header();
			for (int i = 0; i < perso.getNumberOfContact(); i++)
				print_contact_for_search(i, perso.getOneContact(i));
			std::cout << std::endl;
			std::cout << "Which one would you like (number of the index) ? : ";
			int index_of_the_contact;
			std::cin >> index_of_the_contact;
			print_contact(perso.getOneContact(index_of_the_contact));
		}
	} while (command != "EXIT");

	return 0;
}
