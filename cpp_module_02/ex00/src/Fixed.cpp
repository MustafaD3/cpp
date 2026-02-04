#include "Fixed.hpp"

const int Fixed::fixedPointNumberBits = 8;

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->fixedPointNumber = 0;
}
Fixed::Fixed(const Fixed &copyObj){
	std::cout << "Copy constructor called" << std::endl;
	*this = copyObj;
}
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->setRawBits(src.getRawBits());
	return *this;
}
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPointNumber;
}
void Fixed::setRawBits(int const raw)
{
	this->fixedPointNumber = raw;
}