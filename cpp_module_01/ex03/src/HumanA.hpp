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
		void attack();
};
#endif