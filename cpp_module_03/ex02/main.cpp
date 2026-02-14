#include "FragTrap.hpp"
int main(){
	FragTrap trap;
	FragTrap target("Target");
	FragTrap newTarget("kamil");
	target = newTarget;
	trap.attack(target.getName());
	trap.attack(target.getName());
	target.takeDamage(trap.getAttackDamage());
	target.takeDamage(trap.getAttackDamage());
	std::cout << "Target Hitpoint :" <<  target.getHitPoints() << std::endl;
	target.beRepaired(trap.getAttackDamage());
	std::cout << "Target Hitpoint :" <<  target.getHitPoints() << std::endl;
	target.beRepaired(trap.getAttackDamage());
	std::cout << "Target Hitpoint :" << target.getHitPoints() << std::endl;
	trap.highFivesGuys();
	return 0;
}
