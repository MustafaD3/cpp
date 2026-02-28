#include "Animal.hpp"
Animal::Animal():_type("Animal")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal constructor called" << std::endl;
	*this = copy;
}
Animal &Animal::operator=(const Animal &copy)
{
	this->_type = copy._type;
	return *this;
}
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
void Animal::makeSound() const{
	std::cout << "Animal Sound" << std::endl;
}
std::string Animal::getType() const{
	return this->_type;
}