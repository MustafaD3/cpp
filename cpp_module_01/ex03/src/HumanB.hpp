/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:05:44 by mdalkili          #+#    #+#             */
/*   Updated: 2025/09/19 22:05:44 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"
class HumanB{
	private:
		Weapon* gun;
		std::string name;
	public:
		HumanB(const std::string n);
		~HumanB();
		void attack();
		void setWeapon(Weapon& g);
};
#endif