#include "ClapTrap.hpp"
ClapTrap::ClapTrap():_name(""),_hitPoints(10),_energyPoints(10),_attackDamage(0)
{
	std::cout << "ClapTrap instance was created." << std::endl;
}
ClapTrap::ClapTrap(const std::string name):_name(name),_hitPoints(10),_energyPoints(10),_attackDamage(0)
{
	std::cout << "ClapTrap instance was created." << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return *this;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap instance was delete" << std::endl;
}
void ClapTrap::attack(const std::string& target){
	if(this->_energyPoints == 0)
		return (void)(std::cout << "I have no energy" << std::endl);
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->_hitPoints <= 0)
		return (void)(std::cout << "I can't take any more damage" << std::endl);
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_energyPoints == 0)
		return (void)(std::cout << "I have no energy" << std::endl);
	if(this->_hitPoints + amount > this->defaultHitPoints)
		return (void)(std::cout << "I don't need repairing it." << std::endl);
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount << " hit points!" << std::endl;
}
std::string ClapTrap::getName()
{
	return this->_name;
}
int ClapTrap::getHitPoints()
{
	return this->_hitPoints;
}