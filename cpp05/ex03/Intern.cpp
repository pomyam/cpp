#include "Intern.hpp"

Intern::Intern() {
}

Intern::~Intern() {

}

Intern::Intern(Intern const &obj) {
    *this = obj;
}

Intern &Intern::operator=(const Intern &obj) {
    (void)obj;
    return (*this);
}

Form *Intern::makeForm(std::string name, std::string target) {
    Form *(Intern::*func[3])(std::string) = {&Intern::shrubbery, &Intern::robotomy, &Intern::presidential};
    std::string formname[3] = {"shrubbery", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++) {
        if (formname[i] == name)
            return (this->*func[i])(target);
    }
    std::cout << "Form " << name << " was not found" << std::endl;
    return (NULL);
}

Form *Intern::shrubbery(std::string target) {
    std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
    return (new ShrubberyCreationForm(target));
}

Form *Intern::robotomy(std::string target) {
    std::cout << "Intern creates RobotomyRequestForm" << std::endl;
    return (new RobotomyRequestForm(target));
}

Form *Intern::presidential(std::string target) {
    std::cout << "Intern creates PresidentialPardonForm" << std::endl;
    return (new PresidentialPardonForm(target));
}