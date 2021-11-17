#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5) {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) : Form(obj) {

}

PresidentialPardonForm::~PresidentialPardonForm() {

}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    try
    {
        Form::execute(executor);
        std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << executor.getName() << " cannot execute " << this->getName() << " because ";
        std::cerr << e.what() << '\n';
    }
}