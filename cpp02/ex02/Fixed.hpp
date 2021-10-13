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
	float	toFloat( void ) const;
	int 	toInt( void ) const;
	Fixed &operator=(Fixed const &fixed);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed &operator>(Fixed const &fixed);
	Fixed &operator<(Fixed const &fixed);
	Fixed &operator>=(Fixed const &fixed);
	Fixed &operator<=(Fixed const &fixed);
	Fixed &operator==(Fixed const &fixed);
	Fixed &operator!=(Fixed const &fixed);
	Fixed &operator+(Fixed const &fixed);
	Fixed &operator-(Fixed const &fixed);
	Fixed &operator*(Fixed const &fixed);
	Fixed &operator/(Fixed const &fixed);

	static Fixed &min(Fixed const &fixed1, Fixed const &fixed2);
	static Fixed &max(Fixed const &fixed1, Fixed const &fixed2);
};
std::ostream &operator<<(std::ostream &os, Fixed const &fixed);

#endif
