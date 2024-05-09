#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	position = 0;
}

void PhoneBook::add_contact(Contact the_contact)
{
	contacts[position] = &the_contact;
	position++;
}

Contact PhoneBook::get_one_contact(int index)
{
	return *contacts[index];
}

int PhoneBook::get_number_of_contact()
{
	return position;
}
