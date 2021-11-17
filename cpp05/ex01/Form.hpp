#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form {
private:
    std::string const name;
    bool sign;
    int const signgrade;
    int const requiredgrade;
public:
    Form();
    Form(std::string name, int signgrade, int requiredgrade);
    Form(Form const &obj);
    ~Form();
    Form &operator=(Form const &obj);

    std::string	getName() const;
    bool getSign() const;
    int	getSignGrade() const;
    int	getRequiredGrate() const;
    void beSigned(Bureaucrat const & man);
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class IsAlreadySigned : public std::exception{
        virtual const char* what() const throw();
    };
};
std::ostream &operator<<(std::ostream &out, Form const &obj);

#endif //EX01_FORM_HPP
