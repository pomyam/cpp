#include <iostream>
#include "iter.hpp"

class Awesome {
public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) {o << rhs.get(); return o;}

template <typename T>
void print(T const & x ) {std::cout << x << std::endl; return;}

int main() {
    std::cout << "My tests" << std::endl;
    std::cout << "Test of int" << std::endl;
    int arrInt[] = {1, 2, 3, 4, 5};
    iter(arrInt, 5, print<int>);
    std::cout << "\nTest of char" << std::endl;
    char arrChar[] = {'q', 'w', 'e'};
    iter(arrChar, 3, print<char>);
    std::cout << "\nTest of string" << std::endl;
    std::string arrStr[] = {"qwerty", "w", "evg", "oneg"};
    iter(arrStr, 4, print<std::string>);
    std::cout << "\nTest of class Awesome" << std::endl;
    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];
    iter(tab, 5, print<int>);
    iter(tab2, 5, print<Awesome>);
    return 0;
}
