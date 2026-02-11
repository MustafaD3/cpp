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
	std::cout << "Int Constructor called" << std::endl;
	this->fixedPointNumber = input << this->fixedPointNumberBits;
}
Fixed::Fixed(const float input)
{
	std::cout << "Float Constructor called" << std::endl;
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

bool Fixed::operator>(const Fixed &other) const {
    return this->toFloat() > other.toFloat();
}

bool Fixed::operator<(const Fixed &other) const {
    return this->toFloat() < other.toFloat();
}

bool Fixed::operator>=(const Fixed &other) const {
    return this->toFloat() >= other.toFloat();
}

bool Fixed::operator<=(const Fixed &other) const {
    return this->toFloat() <= other.toFloat();
}

bool Fixed::operator==(const Fixed &other) const {
    return this->toFloat() == other.toFloat();
}

bool Fixed::operator!=(const Fixed &other) const {
    return this->toFloat() != other.toFloat();
}

Fixed Fixed::operator+(const Fixed &other) const {
    return this->toFloat() + other.toFloat();
}

Fixed Fixed::operator-(const Fixed &other) const {
    return this->toFloat() - other.toFloat();
}

Fixed Fixed::operator*(const Fixed &other) const {
    return this->toFloat() * other.toFloat();
}

Fixed Fixed::operator/(const Fixed &other) const {
    return this->toFloat() / other.toFloat();
}

Fixed &Fixed::operator++() {
	this->fixedPointNumber += 1;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed duplicated(*this);
	operator++();
	return (duplicated);
}

Fixed &Fixed::operator--() {
	this->fixedPointNumber -= 1;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed duplicated(*this);
	operator--();
	return (duplicated);
}

Fixed &Fixed::min(Fixed &Fixed1, Fixed &Fixed2) {
    if (Fixed1 < Fixed2)
        return (Fixed1);
    return (Fixed2);
}

const Fixed &Fixed::min(const Fixed &Fixed1, const Fixed &Fixed2) {
    if (Fixed1 < Fixed2)
        return (Fixed1);
    return (Fixed2);
}

Fixed &Fixed::max(Fixed &Fixed1, Fixed &Fixed2) {
	if (Fixed1 > Fixed2)
		return (Fixed1);
	return (Fixed2);
}

const Fixed &Fixed::max(const Fixed &Fixed1, const Fixed &Fixed2) {
	if (Fixed1 > Fixed2)
		return (Fixed1);
	return (Fixed2);
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return o;
}
