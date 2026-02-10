#include "Zombie.hpp"
Zombie::Zombie(std::string name)
{
	this->_name = name;
}
Zombie::~Zombie() {
    std::cout << this->_name << ": Destroyed" << std::endl;
}
void Zombie::announce( void )
{
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
