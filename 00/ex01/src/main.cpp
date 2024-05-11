#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "ui.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	PhoneBook perso = PhoneBook();
	perso.addContact(ask_contact());

	//========================================
	for (int i = 0; i < perso.getNumberOfContact(); i++)
	{
		Contact one_contact = perso.getOneContact(i);
		std::cout << i << one_contact.getFirstname() << std::endl;
	}

	return 0;
}
