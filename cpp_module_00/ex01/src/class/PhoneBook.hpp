#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <cstdlib>
#include <sstream>
#include "Contact.hpp"
class PhoneBook
{
	private:
		int index;
		void pattern(Contact user);
		void pattern(std::string field);
		void pattern();
		void printUser(int index);
		Contact list[8];
	public:
		int isExit;
		void addUser();
		void searchUser();
		PhoneBook();
		~PhoneBook();
};

#endif
