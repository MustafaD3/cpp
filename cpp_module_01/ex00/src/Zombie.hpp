/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:06:17 by mdalkili          #+#    #+#             */
/*   Updated: 2025/09/19 22:06:17 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
class Zombie{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		void announce( void );
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif