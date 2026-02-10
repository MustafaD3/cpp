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