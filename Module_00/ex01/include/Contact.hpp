#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	public:
		Contact();
		Contact(std::string firstname, std::string lastname, std::string nickname, std::string phone_number, std::string darkest_secret);
		std::string getFirstname();
		std::string getLastname();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();

	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif
