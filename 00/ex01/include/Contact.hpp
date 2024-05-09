#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	public:
		Contact(std::string firstname, std::string lastname, std::string nickname, std::string phone_number, std::string darkest_secret);
		std::string get_firstname();
		std::string get_lastname();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_darkest_secret();

	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif
