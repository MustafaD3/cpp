/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:06:03 by mdalkili          #+#    #+#             */
/*   Updated: 2025/09/19 22:06:04 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
class Zombie{
	private:
		std::string _name;
	public:
		Zombie();
		~Zombie();
		void announce( void );
		void setName(const std::string n);
};
Zombie* zombieHorde( int N, std::string name );
#endif