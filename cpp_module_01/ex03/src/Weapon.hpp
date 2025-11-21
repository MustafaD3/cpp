/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:05:48 by mdalkili          #+#    #+#             */
/*   Updated: 2025/09/19 22:05:49 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
class Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string t);
		~Weapon();
		const std::string& getType() const;
		void setType(const std::string t);
};
#endif