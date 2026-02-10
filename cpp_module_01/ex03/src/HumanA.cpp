#include "HumanA.hpp"
HumanA::HumanA(const std::string n, Weapon& g):gun(g), name(n){}
void HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->gun.getType() << std::endl;
}