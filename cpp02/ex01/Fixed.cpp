#include "Fixed.hpp"

Fixed::Fixed() {
	this->fix = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
	this->fix = (number << bits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number)
{
	this->fix = std::roundf(number * (1 << bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	this->fix = fixed.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	this->fix = fixed.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed) {
	os << fixed.toFloat();
	return os;
}

int Fixed::toInt( void ) const {
	return (this->fix >> bits);
}

float Fixed::toFloat( void ) const {
	return ((float)((float)this->fix / ((float)(1 << this->bits))));
}

void Fixed::setRawBits(const int raw) {
	this->fix = raw;
}

int Fixed::getRawBits() const {
	return (this->fix);
}