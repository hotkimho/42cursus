#include "Contact.hpp"

void Contact::InputContact(void)
{
	std::cout << "first name : ";
	std::getline(std::cin, first_name);
	std::cout << "last name : ";
	std::getline(std::cin, last_name);
	std::cout << "nickname : ";
	std::getline(std::cin, nickname);
	std::cout << "phone number : ";
	std::getline(std::cin, phone_number);
	std::cout << "darkest secret : ";
	std::getline(std::cin, darkest_secret);
}

void Contact::PrintColumnValue(std::string value)
{
	if (value.length() <= 10)
		std::cout << std::setw(10) << value << '|';
	else
	{
		value = value.substr(0, 9) + ".";
		std::cout << std::setw(10) << value << '|';
	}
}

void Contact::PrintContact(void)
{
	PrintColumnValue(first_name);
	PrintColumnValue(last_name);
	PrintColumnValue(nickname);
	std::cout<<std::endl;
}

void Contact::PrintALLContact(void)
{
	std::cout << "first name : " << first_name << std::endl;
	std::cout << "last name : " << last_name << std::endl;
	std::cout << "nickname : " << nickname << std::endl;
	std::cout << "phone number : " << phone_number << std::endl;
	std::cout << "darkest secret : " << darkest_secret << std::endl;

}

std::string Contact::getFirstName(void)
{
	return first_name;
}