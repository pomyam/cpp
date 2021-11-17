#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
    Intern();
    Intern(Intern const &obj);
    ~Intern();
    Intern& operator=(Intern const &obj);

    Form *makeForm(std::string name, std::string target);
    Form *shrubbery(std::string target);
    Form *robotomy(std::string target);
    Form *presidential(std::string target);
};


#endif //EX03_INTERN_HPP
