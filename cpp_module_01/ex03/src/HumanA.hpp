/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:05:39 by mdalkili          #+#    #+#             */
/*   Updated: 2025/09/19 22:05:39 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"
class HumanA{
	private:
		Weapon& gun;
		std::string name;
	public:
		HumanA(const std::string n, Weapon& g);
		~HumanA();
		void attack();
		void setWeapon(Weapon& g);
};
#endif