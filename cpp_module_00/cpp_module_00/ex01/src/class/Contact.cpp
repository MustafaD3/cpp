#include "Contact.hpp"
Contact::Contact()
{
	
}
Contact::~Contact()
{
	
}

void Contact::setField(std::string &field, std::string fieldName)
{
	this->isEmpty = 1;
	while (this->isEmpty)
	{
		std::cout << fieldName << ":";
		std::getline(std::cin, field);
		if(std::cin.eof())
		{
			std::cout << "You Pressed ^D Exiting" << std::endl;
			this->isEmpty = -1;
			return;
		}
		if(field.size() > 0)
		{
			if(!field.compare("EXIT"))
			{
				this->isEmpty = -1;
				return;
			}
			this->isEmpty = 0;
		}
	}
}
void Contact::setFields()
{
	this->setField(this->firstname, "Firstname");
	if(this->isEmpty)
		return;
	this->setField(this->lastname, "Lastname");
	if(this->isEmpty)
		return;
	this->setField(this->nickname, "Nickname");
	if(this->isEmpty)
		return;
	this->setField(this->number, "Phone Number");
	if(this->isEmpty)
		return;
	this->setField(this->darkestSecret, "Darkest Secret");
	if(this->isEmpty)
		return;
}
std::string Contact::getfirstname()
{
	return this->firstname;
}
std::string Contact::getlastname()
{
	return this->lastname;
}
std::string Contact::getNickname()
{
	return this->nickname;
}
std::string Contact::getNumber()
{
	return this->number;
}
std::string Contact::getDarkest()
{
	return this->darkestSecret;
}