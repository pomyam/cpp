#include "Fixed.hpp"

Fixed::Fixed() {
	this->fix = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	this->fix = fixed.getRawBits();
}

void Fixed::setRawBits(const int raw) {
	this->fix = raw;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fix);
}

Fixed &Fixed::operator=(Fixed const &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	this->fix = fixed.getRawBits();
	return (*this);
}