#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <cstdlib>
class Contact
{
	private:
		std::string darkestSecret;
		void setField(std::string &field, std::string fieldName);
	public:
		int index;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string number;
		int isEmpty;
		void setFields();
		Contact();
		~Contact();
};
#endif