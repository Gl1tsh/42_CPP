#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void add_contact(Contact the_contact);
		Contact get_one_contact(int index);
		int get_number_of_contact();

	private:
		Contact* contacts[8];
		int position;
};

#endif
