#include "Cat.hpp"
Cat::Cat():AAnimal(), _brain(new Brain())
{
	this->_type = "Cat";
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy):AAnimal(copy)
{
	std::cout << "Cat constructor called" << std::endl;
	*this = copy;
}
Cat &Cat::operator=(const Cat &copy)
{
	if(this != &copy)
	{
		this->_type = copy._type;
		if(this->_brain != NULL)
			delete this->_brain;
		this->_brain = new Brain(*copy.getBrain());
	}
	return *this;
}
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}
void Cat::makeSound() const{
	std::cout << "Cat sound" << std::endl;
}

Brain *Cat::getBrain() const
{
	return this->_brain;
}