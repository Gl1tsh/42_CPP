#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	number_of_contact = 0;
}

void PhoneBook::addContact(Contact the_contact)
{
	contacts[number_of_contact] = &the_contact;
	number_of_contact++;
}

Contact PhoneBook::getOneContact(int index)
{
	return *contacts[index];
}

int PhoneBook::getNumberOfContact()
{
	return number_of_contact;
}
