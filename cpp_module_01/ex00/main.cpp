/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:06:12 by mdalkili          #+#    #+#             */
/*   Updated: 2026/02/04 00:21:27 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/Zombie.hpp"
int main(){
	Zombie* heapZombie = newZombie("Ahmet");
	heapZombie->announce();
	randomChump("Mehmet");
	delete heapZombie;
	return 0;
}