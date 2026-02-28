#include "WrongCat.hpp"
WrongCat::WrongCat():WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy):WrongAnimal(copy)
{
	std::cout << "WrongCat constructor called" << std::endl;
	*this = copy;
}
WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	this->type = copy.type;
	return *this;
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
void WrongCat::makeSound() const{
	std::cout << "Miyawwwww" << std::endl;
}
