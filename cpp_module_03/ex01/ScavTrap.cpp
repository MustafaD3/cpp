#include "ScavTrap.hpp"
ScavTrap::ScavTrap():ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap(const std::string name):ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return *this;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}
void ScavTrap::attack(const std::string& target){
	if(this->_energyPoints == 0)
		return (void)(std::cout << "I have no energy" << std::endl);
	if (this->_hitPoints <= 0)
		return (void)(std::cout << "ScavTrap " << this->_name << " is dead can't attack" << std::endl);
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is now guarding the gate" << std::endl;
}
