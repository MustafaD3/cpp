/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:05:46 by mdalkili          #+#    #+#             */
/*   Updated: 2026/02/04 01:45:48 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
Weapon::Weapon(std::string t){
	this->setType(t);
}
const std::string& Weapon::getType() const {return type;}
void Weapon::setType(const std::string t){this->type = t;}