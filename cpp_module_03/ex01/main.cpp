#include "ScavTrap.hpp"
int main(){
	ScavTrap *trap = new ScavTrap();
	ScavTrap target("target");
	ScavTrap newTarget("kamil");
	target = newTarget;
	trap->guardGate();
	trap->attack(target.getName());
	trap->attack(target.getName());
	target.takeDamage(trap->getAttackDamage());
	target.takeDamage(trap->getAttackDamage());
	std::cout << "Target Hitpoint :" <<  target.getHitPoints() << std::endl;
	target.beRepaired(trap->getAttackDamage());
	std::cout << "Target Hitpoint :" <<  target.getHitPoints() << std::endl;
	target.beRepaired(trap->getAttackDamage());
	std::cout << "Target Hitpoint :" << target.getHitPoints() << std::endl;
	delete trap;
	return 0;
}
