/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:05:41 by mdalkili          #+#    #+#             */
/*   Updated: 2025/09/19 22:05:41 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
HumanB::HumanB(const std::string n):name(n),gun(NULL){}
HumanB::~HumanB(){}
void HumanB::attack(){
	if(!this->gun || this->gun->getType().empty())
		std::cerr << this->name << ":I don't have a gun, you have to give me a gun" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->gun->getType() << std::endl;
}
void HumanB::setWeapon(Weapon& g){
	if(&g)
		this->gun = &g;
}