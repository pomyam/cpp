#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> test;
    std::vector<int>::iterator it;
    for (int i = 0; i < 10; i++)
        test.push_back(i);
    try {
        std::cout << "Testing of -1:" << std::endl;
        it = easyfind(test, -1);
        std::cout << "You can't see this line" << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        std::cout << "Testing of 100:" << std::endl;
        it = easyfind(test, 100);
        std::cout << "You can't see this line" << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        std::cout << "Testing of norma:" << std::endl;
        it = easyfind(test, 5);
        std::cout << test[5] << std::endl;
        std::cout << "You can see this line" << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}
