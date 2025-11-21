/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:05:36 by mdalkili          #+#    #+#             */
/*   Updated: 2025/09/19 22:05:36 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
HumanA::HumanA(const std::string n, Weapon& g):gun(g), name(n){}
HumanA::~HumanA(){}
void HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->gun.getType() << std::endl;
}
void HumanA::setWeapon(Weapon& g){
	this->gun = g;
}