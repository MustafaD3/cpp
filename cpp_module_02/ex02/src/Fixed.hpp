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
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		Fixed &operator++();    
		Fixed operator++(int);  
		Fixed &operator--();    
		Fixed operator--(int);  

		static Fixed &min(Fixed &Fixed1, Fixed &Fixed2);
		static const Fixed &min(const Fixed &Fixed1, const Fixed &Fixed2);
		static Fixed &max(Fixed &Fixed1, Fixed &Fixed2);
		static const Fixed &max(const Fixed &Fixed1, const Fixed &Fixed2);
};
std::ostream &operator<<(std::ostream &o, Fixed const &fixed);
#endif