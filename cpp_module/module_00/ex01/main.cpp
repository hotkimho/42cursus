#include "PhoneBook.hpp"

int main()
{
	std::string input;
	PhoneBook phonebook;
	phonebook.initIndex();
	while (true)
	{
		std::cout << "input : ";
		std::getline(std::cin, input);

		if (input == "ADD")
		{
			phonebook.AddContact();
		}
		else if (input == "SEARCH")
		{
			phonebook.SearchContact();
		}
		else if (input == "EXIT")
		{
			return (0);
		}
	}
}