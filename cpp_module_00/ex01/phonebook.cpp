#include "project.hpp"
int command_control(std::string command)
{
	if(!command.compare("ADD") || !command.compare("SEARCH") || !command.compare("EXIT"))
		return 1;
	return 0;
}

int main()
{
	PhoneBook book;
	std::string command;
	while(book.isExit)
	{
		std::cout << "Commands -> [ADD, SEARCH, EXIT]" << std::endl;
		std::cout << "Command:";
		if(!std::getline(std::cin, command))
		{
			std::cout << "You Pressed ^D Exiting" << std::endl;
			book.isExit = 0;
		}
		if(command.empty())
			continue;
		if(command_control(command))
		{
			if(!command.compare("EXIT"))
				book.isExit = 0;
			else if(!command.compare("ADD"))
				book.addUser();
			else if(!command.compare("SEARCH"))
				book.searchUser();
		}
		command.clear();
	}
	return 0;
}
