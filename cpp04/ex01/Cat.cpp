#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Constructor Cat is created!" << std::endl;
    this->type = "Cat";
    this->brain = new Brain;
}

Cat::Cat(const Cat &obj) {
    std::cout << "Copy constructor Cat is created!" << std::endl;
    *this = obj;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "Destructor Cat is created!" << std::endl;
}

void Cat::makeSound() const {
    std::cout << this->type << " make sound MEOW" << std::endl;
}

void Cat::setType(std::string newtype) {
   this->type = newtype;
}

std::string Cat::getType() {
    return (this->type);
}

Cat &Cat::operator=(const Cat &obj) {
    std::cout << "Assignment class Cat is used!" << std::endl;
    this->type = obj.type;
    return (*this);
}

