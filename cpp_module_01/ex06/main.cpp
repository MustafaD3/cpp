/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:06:28 by mdalkili          #+#    #+#             */
/*   Updated: 2025/09/19 22:28:46 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/Harl.hpp"
int main(int argc,char **argv)
{
	Harl harl = Harl();
	if(argc != 2)
	{
		harl.complain("irrelevant string");
		return 1;
	}
	harl.complain(argv[1]);
	return 0;
}