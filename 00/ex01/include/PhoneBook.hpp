#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void addContact(Contact the_contact);
		Contact getOneContact(int index);
		int getNumberOfContact();

	private:
		static const int max_number_of_contact = 8;
		Contact contacts[max_number_of_contact];
		int number_of_contact;
		int insert_position;
};

#endif
