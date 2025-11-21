#include "PhoneBook.hpp"
PhoneBook::PhoneBook()
{
    for (int i = 0; i < 8; i++)
        this->list[i].isEmpty = 1;
    this->isExit = 1;
    this->index = 0;
}
PhoneBook::~PhoneBook(){}
void PhoneBook::addUser()
{
	Contact user;
	user.setFields();
	if(!user.isEmpty)
	{
		if(this->index == 8)
			this->index = 0;
		user.index = this->index;
		this->list[this->index] = user;
		this->index++;
		std::cout << "| User Added |" << std::endl;
	}
	else if(user.isEmpty == -1)
		this->isExit = 0;
	else
		std::cout << "Could not add user" << std::endl;
}
void PhoneBook::searchUser()
{
	int index;
	std::string input;
	std::stringstream ss;
	while(true)
	{
		std::cout << "Index:";
		if(!std::getline(std::cin, input))
		{
			std::cout << "You Pressed ^D Exiting" << std::endl;
			std::exit(0);
		}
		if(!input.empty())
		{
			if(!input.empty())
			{
				std::stringstream ss(input);
				if (!(ss >> index))
				{
					std::cout << "Invalid number, try again" << std::endl;
					continue;
				}
				else if(index < 0)
				{
					std::cout << "You must enter a number greater than -1" << std::endl;
					continue;
				}
				break;
			}
			
			else
				std::cout << "You must enter a number" << std::endl;
		}
	}
	ss >> index;
	this->printUser(index);
}
void PhoneBook::pattern()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|  INDEX  | FIRSTNAME | LASTNAME | NICKNAME |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}
void PhoneBook::pattern(std::string field)
{
	std::string repField = field;
	if(field.size() >= 10)
		repField = field.substr(0,9).append(".");
	for(int i = 0; (u_long)i < (10 - repField.size()); i++)
		std::cout << " ";
	std::cout << repField << "|";
}
void PhoneBook::pattern(Contact user)
{
	std::stringstream ss;
	if(!user.isEmpty)
	{
		std::cout << "|";
		ss << user.index;
		this->pattern(ss.str());
		this->pattern(user.firstName);
		this->pattern(user.lastName);
		this->pattern(user.nickName);
		std::cout << std::endl << "---------------------------------------------" << std::endl;
	}
}
void PhoneBook::printUser(int index)
{
	this->pattern();
	this->pattern(this->list[index]);
}