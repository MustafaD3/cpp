#include "AAnimal.hpp"
AAnimal::AAnimal():_type("Animal")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "Animal constructor called" << std::endl;
	*this = copy;
}
AAnimal &AAnimal::operator=(const AAnimal &copy)
{
	this->_type = copy._type;
	return *this;
}
AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
}
std::string AAnimal::getType() const{
	return this->_type;
}