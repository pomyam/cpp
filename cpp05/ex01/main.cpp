#include "Bureaucrat.hpp"

int main() {
    try
    {
        std::cout << "Test of too high form" << std::endl;
        Form form("Form", 0, 0);
        std::cout << "Test: you can't see this test" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "\nTest of too low form" << std::endl;
        Form form("Form", 155, 155);
        std::cout << "Test: you can't see this test" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "\nTest of lower" << std::endl;
        Bureaucrat	bob("Bob", 50);
        Form form("Form", 25, 25);
        bob.signForm(form);
        std::cout << form;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "\nTest of signed" << std::endl;
        Bureaucrat	bob("Bob", 10);
        Form form("Form", 25, 25);
        form.beSigned(bob);
        std::cout << form;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "\nTest of norma" << std::endl;
        Bureaucrat	bob("Bob", 10);
        Form form("Form", 25, 25);
        bob.signForm(form);
        std::cout << form;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}