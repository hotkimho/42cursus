#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public:
	void AddContact(void);
	void SearchContact(void);
	void initIndex(void);
	void PrintColumn(void);
	void PrintSpace(int idx);
	void SelectContack(int idx);
	private:
	int idx;
	Contact contact[8];
};

#endif