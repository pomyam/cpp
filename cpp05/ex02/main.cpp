#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void checkShrubbery() {
    Bureaucrat Bob("Bob", 147);
    Bureaucrat Steve("Steve", 25);
    ShrubberyCreationForm home("Home");

    std::cout << "Test of unsigned Shrubbery" << std::endl;
    std::cout << home;
    Steve.executeForm(home);

    std::cout << "\nTest of low signed Shrubbery" << std::endl;
    Bob.signForm(home);
    std::cout << std::endl;

    std::cout << "Test of already signed Shrubbery" << std::endl;
    Steve.signForm(home);
    Bureaucrat Ted("Ted", 130);
    Ted.signForm(home);

    std::cout << "\nTest of norm signed Shruberry" << std::endl;
    ShrubberyCreationForm house("House");
    Steve.signForm(house);
    Steve.executeForm(house);
    std::cout << std::endl;
}

void checkPresidential() {
    Bureaucrat Bob("Bob", 147);
    Bureaucrat Steve("Steve", 1);
    PresidentialPardonForm form("white house");

    std::cout << "\nTest of unsigned Presidential" << std::endl;
    std::cout << form;
    Steve.executeForm(form);

    std::cout << "\nTest of low signed Presidential" << std::endl;
    Bob.signForm(form);
    Bob.executeForm(form);
    std::cout << std::endl;

    std::cout << "Test of already signed Presidential" << std::endl;
    Steve.signForm(form);
    Bureaucrat Ted("Ted", 10);
    Ted.signForm(form);

    std::cout << "\nTest of norm signed Presidential" << std::endl;
    PresidentialPardonForm house("parlament");
    Steve.signForm(house);
    Steve.executeForm(house);
    std::cout << std::endl;
}

void checkRobotomy() {
    Bureaucrat Bob("Bob", 147);
    Bureaucrat Steve("Steve", 25);
    RobotomyRequestForm form("robot");

    std::cout << "\nTest of unsigned Robotomy" << std::endl;
    std::cout << form;
    Steve.executeForm(form);

    std::cout << "\nTest of low signed Robotomy" << std::endl;
    Bob.signForm(form);
    Bob.executeForm(form);

    std::cout << "\nTest of already signed Robotomy" << std::endl;
    Steve.signForm(form);
    Bureaucrat Ted("Ted", 50);
    Ted.signForm(form);

    std::cout << "\nTest of norm signed Robotomy" << std::endl;
    RobotomyRequestForm robot("robot");
    Steve.signForm(robot);
    Steve.executeForm(robot);
}

int main() {
    std::cout << "____________Test of Shrubbery____________\n";
    checkShrubbery();
    std::cout << "\n\n____________Test of Presidental____________\n";
    checkPresidential();
    std::cout << "\n\n____________Test of Robotomy____________\n";
    checkRobotomy();
    return 0;
}