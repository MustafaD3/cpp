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
		user.index = this->index + 1;
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
	int current_index = 0;
	std::string input;

	// count how many users are present
	while (current_index < 8 && !this->list[current_index].isEmpty)
		current_index++;
	int count = current_index;
	if (count == 0)
	{
		std::cout << "You need to add a user to be able to search!" << std::endl;
		return;
	}

	// print header once
	this->pattern();
	for (int i = 0; i < count; ++i)
		this->printUser(i + 1);

	std::cout << "Index:";
	if (!std::getline(std::cin, input))
	{
		std::cout << "You Pressed ^D Exiting" << std::endl;
		this->isExit = 0;
		return;
	}
	if (input.empty())
	{
		std::cout << "You must enter a number" << std::endl;
		return;
	}
	std::stringstream ss(input);
	if (!(ss >> index))
	{
		std::cout << "Invalid number" << std::endl;
		return;
	}
	if (index < 1 || index > count)
	{
		std::cout << "Index out of range" << std::endl;
		return;
	}
	this->printUserAll(index);
}
void PhoneBook::pattern()
{
	std::cout << std::string(45, '-') << std::endl;
	std::cout << "|" << std::setw(10) << std::right << "INDEX" << "|"
			  << std::setw(10) << std::right << "FIRSTNAME" << "|"
			  << std::setw(10) << std::right << "LASTNAME" << "|"
			  << std::setw(10) << std::right << "NICKNAME" << "|" << std::endl;
	std::cout << std::string(45, '-') << std::endl;
}
void PhoneBook::pattern(std::string field)
{
	std::string repField = field;
	if (field.size() > 10)
		repField = field.substr(0, 9).append(".");
	std::cout << std::setw(10) << std::right << repField << "|";
}
void PhoneBook::pattern(Contact user)
{
	std::stringstream ss;
	if(!user.isEmpty)
	{
		std::cout << "|";
		ss << user.index;
		this->pattern(ss.str());
		this->pattern(user.getfirstname());
		this->pattern(user.getlastname());
		this->pattern(user.getNickname());
		std::cout << std::endl << std::string(45, '-') << std::endl;
	}
}
void PhoneBook::patternUserAll(Contact user)
{
	std::stringstream ss;
	if(!user.isEmpty)
	{
		ss << user.index;
		std::cout << std::endl << "User" << std::endl;
		std::cout << "Index:" << ss.str() << std::endl;
		std::cout << "firstname:" << user.getfirstname() << std::endl;
		std::cout << "lastname:" << user.getlastname() << std::endl;
		std::cout << "Nickname:" << user.getNickname() << std::endl;
		std::cout << "Number:" << user.getNumber() << std::endl;
		std::cout << "Darkest Secret:" << user.getDarkest() << std::endl << std::endl;
	}
}
void PhoneBook::printUser(int index)
{
	if (index > 0)
		this->pattern(this->list[index - 1]);
}
void PhoneBook::printUserAll(int index)
{
	if (index > 0 && index <= 8 && !this->list[index - 1].isEmpty)
		this->patternUserAll(this->list[index - 1]);
	else
		std::cout << "Invalid index or empty entry" << std::endl;
}