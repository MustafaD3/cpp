#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <cstdlib>
#include <string>
class Contact
{
	private:
		void setField(std::string &field, std::string fieldName);
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string number;
		std::string darkestSecret;
		public:
			int index;
			int isEmpty;
				std::string getfirstname();
			std::string getlastname();
			std::string getNickname();
			std::string getNumber();
			std::string getDarkest();
			void setFields();
			Contact();
			~Contact();
};
#endif