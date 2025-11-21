/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdalkili <mdalkilic344@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:06:31 by mdalkili          #+#    #+#             */
/*   Updated: 2025/09/19 22:21:32 by mdalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
class Harl{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Harl(void);
		~Harl(void);
		void complain(std::string level);
};
#endif