#ifndef Contact_HPP
#define Contact_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	public:
	void InputContact(void);
	void PrintContact(void);
	void PrintColumnValue(std::string value);
	void PrintALLContact(void);
	std::string getFirstName(void);

	private:
		std::string first_name;
		std::string last_name;
		std::string phone_number;
		std::string nickname;
		std::string darkest_secret;
};

#endif