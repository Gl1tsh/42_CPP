#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	number_of_contact = 0;
	insert_position = 0;
}

void PhoneBook::addContact(Contact the_contact)
{
	contacts[insert_position] = the_contact;

	insert_position = (insert_position + 1) % max_number_of_contact;
	if (number_of_contact < max_number_of_contact)
		number_of_contact++;
}

Contact PhoneBook::getOneContact(int index)
{
	return contacts[index];
}

int PhoneBook::getNumberOfContact()
{
	return number_of_contact;
}
