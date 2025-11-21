/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:06:06 by mdalkili          #+#    #+#             */
/*   Updated: 2025/09/19 22:06:06 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
	if (N < 1)
	{
		std::cout << "A Horde can not contain less than 1 Zombie." << std::endl;
		return (NULL);
	}
	Zombie *horde = new Zombie[N];
	if(!horde)
	{
		std::cout << "Allocation of the horde failed." << std::endl;
		return NULL;
	}
	for(int i = 0;i < N; i++)
		horde[i].setName(name);
	return horde;
}