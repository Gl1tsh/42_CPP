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

	Contact contact_1 = Contact(firstname, lastname, nickname, phone_number, darkest_secret);
	Contact contact_2 = Contact("Joe", "Dalton", "Merci", "01314", "table");

	PhoneBook perso = PhoneBook();
	perso.addContact(contact_2);
	perso.addContact(contact_1);

	//========================================
	for (int i = 0; i < perso.getNumberOfContact(); i++)
	{
		Contact one_contact = perso.getOneContact(i);
		std::cout << i << one_contact.getFirstname() << std::endl;
	}

	return 0;
}
