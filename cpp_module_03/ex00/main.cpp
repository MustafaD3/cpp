#include "ClapTrap.hpp"
int main(){
	ClapTrap trap;
	ClapTrap target("target");
	ClapTrap kamil;
	target = kamil;
	trap.attack(target.getName());
	trap.attack(target.getName());
	trap.attack(target.getName());
	trap.attack(target.getName());
	trap.attack(target.getName());
	trap.attack(target.getName());
	trap.attack(target.getName());
	trap.attack(target.getName());
	trap.attack(target.getName());
	trap.attack(target.getName());
	trap.attack(target.getName());
	target.takeDamage(9);
	std::cout << "Target Hitpoint :" <<  target.getHitPoints() << std::endl;
	target.beRepaired(9);
	std::cout << "Target Hitpoint :" <<  target.getHitPoints() << std::endl;
	target.takeDamage(10);
	std::cout << "Target Hitpoint :" <<  target.getHitPoints() << std::endl;
	target.beRepaired(10);
	std::cout << "Target Hitpoint :" << target.getHitPoints() << std::endl;
	return 0;
}