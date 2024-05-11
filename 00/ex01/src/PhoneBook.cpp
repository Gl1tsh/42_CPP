#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	position = 0;
}

void PhoneBook::addContact(Contact the_contact)
{
	contacts[position] = &the_contact;
	position++;
}

Contact PhoneBook::getOneContact(int index)
{
	return *contacts[index];
}

int PhoneBook::getNumberOfContact()
{
	return position;
}
