#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP
#include <iostream>
class Fixed {
private:
	int fix;
	const static  int bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed &operator=(Fixed const &fixed);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};


#endif
