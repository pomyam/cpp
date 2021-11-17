#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &obj);
    virtual ~RobotomyRequestForm();
    void execute(Bureaucrat const &executor) const;
};


#endif //EX02_ROBOTOMYREQUESTFORM_HPP
