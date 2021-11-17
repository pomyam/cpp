#include "ShrubberyCreationForm.hpp"
#include <string.h>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137) {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : Form(obj) {

}
ShrubberyCreationForm::~ShrubberyCreationForm() {

}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    try
    {
        Form::execute(executor);
        std::string text = this->getName() + "_shrubbery";
        std::ofstream out(text.c_str());
        out << "        /|||||||\\\n";
        out << "       /|||||||||\\\n";
        out << "      /|||||||||||\\\n";
        out << "       \\|||||||||/\n";
        out << "          |||||\n";
        out << "          |||||\n";
        out << "          |||||\n";
        out << "          |||||\n";
        out << "          |||||\n";
        out.close();
    }
    catch(const std::exception &e)
    {
        std::cerr << executor.getName() << " cannot execute " << this->getName() << " because ";
        std::cerr << e.what() << '\n';
    }
}
