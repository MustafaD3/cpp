#include "Dog.hpp"
Dog::Dog():Animal(), _brain(new Brain())
{
	this->_type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy):Animal(copy), _brain(NULL)
{
	std::cout << "Dog constructor called" << std::endl;
	*this = copy;
}
Dog &Dog::operator=(const Dog &copy)
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
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}
void Dog::makeSound(void) const{
    std::cout << "Dog Sound" << std::endl;
}
Brain *Dog::getBrain() const
{
	return (this->_brain);
}