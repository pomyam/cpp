#include "Fixed.hpp"

// constructors and destructors

Fixed::Fixed() {
	this->fix = 0;
}

Fixed::Fixed(const int number) {
	this->fix = number * (1 << bits);
}

Fixed::Fixed(const float number) {
	this->fix = std::roundf(number * (1 << bits));
}

Fixed::Fixed(const Fixed &fixed) {
	this->fix = fixed.getRawBits();
}

Fixed::~Fixed() {
}

// toInt, toFloat, set and get

int Fixed::toInt( void ) const {
	return (roundf((float)this->fix / (float)(1 << bits)));
}

float Fixed::toFloat( void ) const {
	return ((float)this->fix / ((float)(1 << bits)));
}

void Fixed::setRawBits(const int raw) {
	this->fix = raw;
}

int Fixed::getRawBits() const {
	return (this->fix);
}

//operators overload = + - * /

Fixed &Fixed::operator=(Fixed const &fixed) {
	this->fix = fixed.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(Fixed const &fixed) const {
	Fixed tmp;
	tmp.fix = fix + fixed.fix;
	return tmp;
}

Fixed Fixed::operator-(Fixed const &fixed) const{
	Fixed tmp;
	tmp.fix = fix - fixed.fix;
	return tmp;
}

Fixed Fixed::operator*(Fixed const &fixed) const{
	Fixed tmp;
	tmp.fix = fix * fixed.getRawBits() >> 8;
	return tmp;
}

Fixed Fixed::operator/(Fixed const &fixed) const{
	Fixed tmp;
	tmp.fix = fix / fixed.fix;
	return tmp;
}

// > < >= <= == !=

bool Fixed::operator>(Fixed const &fixed) const{
	return (this->fix > fixed.fix);
}

bool Fixed::operator<(Fixed const &fixed) const{
	return (this->fix < fixed.fix);
}

bool Fixed::operator>=(Fixed const &fixed) const{
	return (this->fix >= fixed.fix);
}

bool Fixed::operator<=(Fixed const &fixed) const{
	return (this->fix <= fixed.fix);
}

bool Fixed::operator==(Fixed const &fixed) const{
	return (this->fix == fixed.fix);
}

bool Fixed::operator!=(Fixed const &fixed) const{
	return (this->fix != fixed.fix);
}

// ++ --

Fixed &Fixed::operator++() {
	this->fix = (this->toFloat() + EPS) * (1 << bits);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return(tmp);
}

Fixed &Fixed::operator--() {
	this->fix = (this->toFloat() - EPS) * (1 << bits);
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return(tmp);
}

// overload <<

std::ostream &operator<<(std::ostream &os, Fixed const &fixed) {
	os << fixed.toFloat();
	return os;
}

// min and max

Fixed &Fixed::min(Fixed const &fixed1, Fixed const &fixed2) {
	if (fixed1 > fixed2)
		return (Fixed &)fixed2;
	else
		return (Fixed &)fixed1;
}

Fixed &Fixed::max(Fixed const &fixed1, Fixed const &fixed2) {
	if (fixed1 < fixed2)
		return (Fixed &)fixed2;
	else
		return (Fixed &)fixed1;
}