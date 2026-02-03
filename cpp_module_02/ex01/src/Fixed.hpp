#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed{
	private:
		int fixedPointNumber;
		static const int fixedPointNumberBits;
	public:
		Fixed();
		Fixed(int number);
		Fixed(float number);
		Fixed(const Fixed &copyObj);
		Fixed &operator=(const Fixed &src);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
	};
std::ostream &operator<<(std::ostream &o, Fixed const &fixed);
#endif