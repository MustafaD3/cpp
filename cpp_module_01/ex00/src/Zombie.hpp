/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:06:17 by mdalkili          #+#    #+#             */
/*   Updated: 2026/02/04 00:19:54 by mdalkili         ###   ########.fr       */
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
		~Zombie();
		void announce( void );
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif