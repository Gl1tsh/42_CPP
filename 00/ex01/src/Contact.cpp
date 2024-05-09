#include "Contact.hpp"

Contact::Contact(std::string firstname, std::string lastname, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	this->firstname = firstname;
	this->lastname = lastname;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

std::string Contact::get_firstname()
{
	return firstname;
}

std::string Contact::get_lastname()
{
	return lastname;
}

std::string Contact::get_nickname()
{
	return nickname;
}

std::string Contact::get_phone_number()
{
	return phone_number;
}

std::string Contact::get_darkest_secret()
{
	return darkest_secret;
}

