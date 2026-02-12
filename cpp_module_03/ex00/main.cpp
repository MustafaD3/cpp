#include "./src/ClapTrap.hpp"
int main(){
	ClapTrap trap("trap");
	ClapTrap target("target");
	trap.attack(target.getName());
	trap.attack(target.getName());
	trap.attack(target.getName());
	target.takeDamage(1);
	target.takeDamage(1);
	target.takeDamage(1);
	std::cout << "Target Hitpoint :" <<  target.getHitPoints() << std::endl;
	target.beRepaired(1);
	target.beRepaired(1);
	target.beRepaired(1);
	target.beRepaired(1);
	std::cout << "Target Hitpoint :" << target.getHitPoints() << std::endl;
}