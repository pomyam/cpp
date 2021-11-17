#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const &obj);
    virtual ~ShrubberyCreationForm();
    void execute(Bureaucrat const &executor) const;
};


#endif //EX02_SHRUBBERYCREATIONFORM_HPP
