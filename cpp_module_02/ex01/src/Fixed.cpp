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

Fixed::Fixed(const int input)
{
	std::cout << "Fixed Int Constructor called" << std::endl;
	this->fixedPointNumber = input << this->fixedPointNumberBits;
}

Fixed::Fixed(const float input)
{
	std::cout << "Fixed Float Constructor called" << std::endl;
	this->fixedPointNumber = roundf(input * (1 << this->fixedPointNumberBits));
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPointNumber;
}
void Fixed::setRawBits(int const raw)
{
	this->fixedPointNumber = raw;
}
float Fixed::toFloat() const
{
	return ((float)this->fixedPointNumber / (float)(1 << this->fixedPointNumberBits));
}
int Fixed::toInt() const{
	return (this->fixedPointNumber >> this->fixedPointNumberBits);
}
std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return o;
}
