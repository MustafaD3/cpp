/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:06:33 by mdalkili          #+#    #+#             */
/*   Updated: 2026/02/03 01:20:54 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
Harl::Harl(void){}
Harl::~Harl(void){}
void Harl::debug(void)
{
	std::cout << "[DEBUG] I love having extra bacon for my\
 7XL-double-cheese-triple-pickle-special-ketchup\
 burger. I really do!" 
 << std::endl;
}
void Harl::info(void)
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put\
 enough bacon in my burger! If you did,\
 I wouldn’t be asking for more!" 
 << std::endl;
}
void Harl::warning(void)
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free.\
 I’ve been coming for years, whereas you started\
 working here just last month." 
 << std::endl;
}
void Harl::error(void)
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." 
 << std::endl;
}
void	Harl::complain(std::string level)
{
	typedef void (Harl::*FuncPtr)();
	std::pair<std::string, FuncPtr> table[4] = {
		std::make_pair("DEBUG", &Harl::debug),
		std::make_pair("INFO", &Harl::info),
		std::make_pair("WARNING", &Harl::warning),
		std::make_pair("ERROR", &Harl::error)
	};
	int i = 0;
	for(; i < 4;i++)
	{
		if(level == table[i].first)
			break;
	}
	switch(i)
	{
		case(0):
			(this->*table[0].second)();
		case(1):
			(this->*table[1].second)();
		case(2):
			(this->*table[2].second)();
		case(3):
			(this->*table[3].second)();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}