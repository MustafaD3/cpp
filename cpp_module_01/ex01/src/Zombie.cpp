#include "Zombie.hpp"
Zombie::Zombie()
{
}
Zombie::~Zombie()
{
	std::cout << this->_name << ": Destroyed" << std::endl;
}
void Zombie::announce( void )
{
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(const std::string n){this->_name = n;}
