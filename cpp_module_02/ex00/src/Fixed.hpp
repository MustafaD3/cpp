#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed{
	private:
		int fixedPointNumber;
		static const int fixedPointNumberBits;
	public:
		Fixed();
		Fixed(const Fixed &copyObj);
		Fixed &operator=(const Fixed &src);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
#endif