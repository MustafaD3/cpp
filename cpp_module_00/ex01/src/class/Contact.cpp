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
			std::exit(0);
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
	this->setField(this->firstName, "Firstname");
	if(this->isEmpty)
		return;
	this->setField(this->lastName, "Lastname");
	if(this->isEmpty)
		return;
	this->setField(this->nickName, "Nickname");
	if(this->isEmpty)
		return;
	this->setField(this->number, "Phone Number");
	if(this->isEmpty)
		return;
	this->setField(this->darkestSecret, "Darkest Secret");
	if(this->isEmpty)
		return;
}