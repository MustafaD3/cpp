#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal():type("WrongAnimal")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	*this = copy;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->type = copy.type;
	return *this;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}
void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal Sound" << std::endl;
}
std::string WrongAnimal::getType() const{
	return this->type;
}