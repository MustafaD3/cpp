/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:05:58 by mdalkili          #+#    #+#             */
/*   Updated: 2025/09/19 22:05:58 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/Zombie.hpp"
int main(){
	int number = 15;
	Zombie* horde = zombieHorde(number,"Zombie");
	if(!horde)
		return(EXIT_FAILURE);
	for(int i = 0;i<number;i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}