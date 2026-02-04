/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:05:58 by mdalkili          #+#    #+#             */
/*   Updated: 2026/02/04 00:29:54 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/Zombie.hpp"
int main(){
	int number = 5;
	Zombie* horde = zombieHorde(number,"Zombie");
	if(!horde)
		return(EXIT_FAILURE);
	for(int i = 0;i<number;i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}