#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other) {
    *this = other;
    std::cout << "FragTrap copy Constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << this->_name << " Do you want high five" << std::endl;
}