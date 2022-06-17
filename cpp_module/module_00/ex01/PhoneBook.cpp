#include "PhoneBook.hpp"

void PhoneBook::initIndex(void)
{
	idx = 0;
}

void PhoneBook::AddContact(void)
{
	contact[idx % 8].InputContact();
	idx++;
}

void PhoneBook::PrintColumn(void)
{
	std::cout << std::setw(10) << "index" << '|';
	std::cout << std::setw(10) << "first name" << '|';
	std::cout << std::setw(10) << "last name" << '|';
	std::cout << std::setw(10) << "nickname" << '|'<<std::endl;
}

void PhoneBook::PrintSpace(int idx)
{
	std::cout << std::setw(10) << idx << '|';
	std::cout << std::setw(10) << " " << '|';
	std::cout << std::setw(10) << " " << '|';
	std::cout << std::setw(10) << " " << '|'<<std::endl;
}

void PhoneBook::SearchContact(void)
{
	PrintColumn();
	for (int i = 0; i < 8; i++)
	{
		if (contact[i].getFirstName() == "")
		{
			PrintSpace(i);
			continue;
		}
		std::cout << std::setw(10) << i << '|';
		contact[i].PrintContact();
	}
	std::string idxStr;
	std::cout << "select index : ";
	std::getline(std::cin, idxStr);
	int idx = atoi(idxStr.c_str());
	SelectContack(idx);
}

void PhoneBook::SelectContack(int idx)
{
	if (contact[idx].getFirstName() == "")
	{
		std::cout << "index has no value" << std::endl;
		return;
	}
	contact[idx].PrintALLContact();
}