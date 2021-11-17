#include "Form.hpp"

Form::Form() : name(NULL), sign(false), signgrade(0), requiredgrade(0) {
}

Form::~Form() {

}

Form::Form(const Form &obj) : name(obj.name), sign(obj.sign), signgrade(obj.signgrade), requiredgrade(obj.requiredgrade) {
    if (signgrade < 1 || requiredgrade < 1)
        throw GradeTooHighException();
    else if (signgrade > 150 || requiredgrade > 150)
        throw GradeTooLowException();
    *this = obj;
}

Form::Form(std::string name, int signgrade, int requiredgrade) : name(name), sign(false), signgrade(signgrade), requiredgrade(requiredgrade) {
    if (signgrade < 1 || requiredgrade < 1)
        throw GradeTooHighException();
    else if (signgrade > 150 || requiredgrade > 150)
        throw GradeTooLowException();
}

Form &Form::operator=(const Form &obj) {
    this->sign = obj.sign;
    return (*this);
}

std::string Form::getName() const {
    return this->name;
}

bool Form::getSign() const {
    return this->sign;
}

int	Form::getSignGrade() const {
    return this->signgrade;
}

int	Form::getRequiredGrate() const {
    return this->requiredgrade;
}

void Form::beSigned(Bureaucrat const & man) {
    if (man.getGrade() > this->signgrade)
        throw GradeTooLowException();
    else if (this->sign)
        throw IsAlreadySigned();
    else {
        this->sign = true;
        std::cout << "Form was signed!" << std::endl;
    }
}

void Form::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > this->requiredgrade)
        throw GradeTooLowException();
    else if (!this->sign)
        throw IsAlreadySigned();
    else
        std::cout << this->getName() << " was success execute " << std::endl;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

const char* Form::IsAlreadySigned::what() const throw() {
    return "This form is already signed";
}

std::ostream &operator<<(std::ostream &out, Form const &obj) {
    out << "Form required: " << obj.getSignGrade() << " grade to sign and " << obj.getRequiredGrate() << " grade to execute." << std::endl;
    out << "Form is signed? - " << obj.getSign() << std::endl;
    return out;
}
