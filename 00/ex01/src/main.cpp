#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "ui.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	PhoneBook perso = PhoneBook();
	perso.addContact(ask_contact());
	perso.addContact(ask_contact());

	//========================================
	for (int i = 0; i < perso.getNumberOfContact(); i++)
		print_contact_for_search(i, perso.getOneContact(i));
	std::cout << "Which one would you like (number of the index) ? : ";
	int index_of_the_contact;
	std::cin >> index_of_the_contact;
	print_contact(perso.getOneContact(index_of_the_contact));

	return 0;
}
