/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:05:46 by mdalkili          #+#    #+#             */
/*   Updated: 2025/09/19 22:05:46 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
Weapon::Weapon(std::string t){
	this->setType(t);
}
Weapon::~Weapon(){}
const std::string& Weapon::getType() const {return type;}
void Weapon::setType(const std::string t){this->type = t;}