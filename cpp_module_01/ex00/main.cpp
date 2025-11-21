/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:06:12 by mdalkili          #+#    #+#             */
/*   Updated: 2025/09/19 22:06:12 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/Zombie.hpp"
int main(){
	Zombie* heapZombie = newZombie("Mustafa");
	heapZombie->announce();
	randomChump("Oscar");
	delete heapZombie;
	return 0;
}