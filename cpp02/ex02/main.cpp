#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	std::cout << " \nAddition tests " << a << " and " << b << std::endl;
	Fixed c;
	c++;
	bool res;
	std::cout << "sum: " << a + b << std::endl;
	std::cout << "del: " << a - b << std::endl;
	std::cout << "prec: " <<  a * b << std::endl;
	std::cout << "dec: " << a / b << std::endl;
	std::cout << "dec a--: " << a-- << std::endl;
	std::cout << "dec --a: " << --a << std::endl;
	res = b >= a;
	std::cout << "bigger: " << res << std::endl;
	res = b > a;
	std::cout << "strong bigger: " << res << std::endl;
	res = a <= 3;
	std::cout << "less: " <<  res << std::endl;
	res = a < 3;
	std::cout << "strong less: " << res << std::endl;
	res = a == b;
	std::cout << "equal: " <<  res << std::endl;
	res = a != b;
	std::cout << "not equal: " << res << std::endl;
	return 0;
}
