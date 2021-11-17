#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45) {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : Form(obj) {

}

RobotomyRequestForm::~RobotomyRequestForm() {

}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    try
    {
        Form::execute(executor);
        srand(time(NULL));
        std::cout << "DRRRRRRRRRRRRRRRR" << std::endl;
        std::rand() % 2 ? std::cout << this->getName() << " has been robotomized" << std::endl :
            std::cout << this->getName() << " failed to be robotomized" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << executor.getName() << " cannot execute " << this->getName() << " because ";
        std::cerr << e.what() << '\n';
    }

}