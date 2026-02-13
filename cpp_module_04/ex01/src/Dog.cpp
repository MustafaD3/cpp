#include "Dog.hpp"
Dog::Dog():Animal()
{
	this->type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy):Animal(copy)
{
	std::cout << "Dog constructor called" << std::endl;
	*this = copy;
}
Dog &Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	return *this;
}
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
void Dog::makeSound(void) const{
    std::cout << "Hav Havvv" << std::endl;
}