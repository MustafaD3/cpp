/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:05:15 by mdalkili          #+#    #+#             */
/*   Updated: 2025/09/19 22:05:15 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/Harl.hpp"
int main(int ac,char **argv)
{
	Harl comments;
	std::string input;
	for (;;)
	{
		std::cout << "Inputs [EXIT,DEBUG,INFO,WARNING,ERROR]" << std::endl;
		std::cout << "Select:";
		getline(std::cin, input);
		if(std::cin.eof())
		{
			std::cout << "^D" << std::endl;
			return EXIT_FAILURE;
		}
		if(input == "EXIT")
		{
			std::cout << "Program Closing..." << std::endl;
			return EXIT_SUCCESS;
		}
		comments.complain(input);
	}
}
