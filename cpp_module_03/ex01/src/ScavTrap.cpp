#include "ScavTrap.hpp"
ScavTrap::ScavTrap():ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap instance was created." << std::endl;
}
ScavTrap::ScavTrap(const std::string name):ClapTrap(name)
{
	std::cout << "ScavTrap instance was created." << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = copy;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return *this;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap instance was delete" << std::endl;
}
void ScavTrap::attack(const std::string& target){
	if(this->_energyPoints == 0)
		return (void)(std::cout << "I have no energy" << std::endl);
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

std::string ScavTrap::getName()
{
	return this->_name;
}
int ScavTrap::getHitPoints()
{
	return this->_hitPoints;
}