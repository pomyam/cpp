#include "Bureaucrat.hpp"

int main() {
    try
    {
        std::cout << "\n__________Check too high_______" << std::endl;
        Bureaucrat bob("Bob", 0);
        std::cout << "Check exception: you don't see this line" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "\n__________Check too low_______" << std::endl;
        Bureaucrat sten("Sten", 151);
        std::cout << "Check exception: you don't see this line" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "\n__________Check too low increment_______" << std::endl;
        Bureaucrat jack("Jack", 1);
        jack.increment();
        std::cout << "Check exception: you don't see this line" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "\n__________Check too low decrement_______" << std::endl;
        Bureaucrat tim("Tim", 150);
        tim.decrement();
        std::cout << "Check exception: you don't see this line" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\n__________Check of increment and decrement_______" << std::endl;
    Bureaucrat bob("Bob", 50);
    bob.decrement();
    std::cout << bob;
    bob.increment();
    std::cout << bob;
}