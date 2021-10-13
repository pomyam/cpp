#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP
#include <iostream>
#include <cmath>
#include <string>

class Fixed {
private:
	int fix;
	const static  int bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int number);
	Fixed(const float number);
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed &operator=(Fixed const &fixed);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
std::ostream &operator<<(std::ostream &os, Fixed const &fixed);

#endif
