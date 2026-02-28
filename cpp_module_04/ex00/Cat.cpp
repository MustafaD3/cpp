#include "Cat.hpp"
Cat::Cat():Animal()
{
	this->type = "Cat";
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy):Animal(copy)
{
	std::cout << "Cat constructor called" << std::endl;
	*this = copy;
}
Cat &Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	return *this;
}
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
void Cat::makeSound() const{
	std::cout << "Miyawwwww" << std::endl;
}
