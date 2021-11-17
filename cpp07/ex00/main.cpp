#include <iostream>
#include "whatever.hpp"

class Awesome {
public:
	Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int getN() const { return this->_n; }
private:
	int _n;
};
std::ostream &operator<<(std::ostream &o, const Awesome &a) {o << a.getN(); return o;}

void try_int() {
    std::cout << "Integers" << std::endl;
    int a = 2, b = 5;
    std::cout << "Before swap a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "After swap a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
}

void try_float() {
    std::cout << std::endl << "Integers" << std::endl;
    float a = 7.1, b = 5.8;
    std::cout << "Before swap a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "After swap a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
}

void try_strings() {
    std::cout << std::endl << "Strings" << std::endl;
    std::string a = "str1", b = "str2";
    std::cout << "Before swap a = " << a << ", b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "After swap a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
}

void try_class() {
    std::cout << std::endl << "Class" << std::endl;
    Awesome a(12), b(9);
    std::cout << "Before swap a = " << a.getN() << ", b = " << b.getN() << std::endl;
    ::swap(a, b);
    std::cout << "After swap a = " << a.getN() << ", b = " << b.getN() << std::endl;
    std::cout << "min( a, b ) = " << (::min(a, b)).getN() << std::endl;
    std::cout << "max( a, b ) = " << (::max(a, b)).getN() << std::endl;
    std::cout << a << " " << b << std::endl;
    std::cout << min(a, b) << std::endl;
    std::cout << max(a, b) << std::endl;
}

int main() {
    try_int();
    try_float();
    try_strings();
    try_class();
    return 0;
}
