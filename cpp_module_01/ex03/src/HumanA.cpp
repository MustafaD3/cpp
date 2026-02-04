/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:05:36 by mdalkili          #+#    #+#             */
/*   Updated: 2026/02/04 01:45:14 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
HumanA::HumanA(const std::string n, Weapon& g):gun(g), name(n){}
void HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->gun.getType() << std::endl;
}