#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main() {
    Bureaucrat Bob("Bob", 2);
    Intern someRandomIntern;
    Form *rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    Form *scf;
    scf = someRandomIntern.makeForm("shrubbery", "Home");
    Form *ppf;
    ppf = someRandomIntern.makeForm("presidential pardon", "House");

    Bob.signForm(*rrf);
    Bob.signForm(*scf);
    Bob.signForm(*ppf);

    Bob.executeForm(*rrf);
    Bob.executeForm(*scf);
    Bob.executeForm(*ppf);

    Form *unknown;
    unknown = someRandomIntern.makeForm("unknown", "NULL");
    return 0;
}