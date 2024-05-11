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
		Contact* contacts[8];
		int position;
};

#endif
