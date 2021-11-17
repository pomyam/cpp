#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form{
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &obj);
    virtual ~PresidentialPardonForm();
    void execute(Bureaucrat const & executor) const;
};

#endif //EX02_PRESIDENTIALPARDONFORM_HPP
