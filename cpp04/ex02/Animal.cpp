#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Constructor Animal is created!" << std::endl;
    this->type = "Unknown";
}

Animal::Animal(const Animal &obj) {
    std::cout << "Copy constructor Animal is created!" << std::endl;
    *this = obj;
}

Animal::~Animal() {
    std::cout << "Destructor Animal is created!" << std::endl;
}

void Animal::makeSound() const{
    std::cout << this->type << " make sound ttttt" << std::endl;
}

void Animal::setType(std::string newtype) {
    this->type = newtype;
}

std::string Animal::getType() const{
    return (this->type);
}

Animal &Animal::operator=(const Animal &obj) {
    std::cout << "Assignment class Animal is used!" << std::endl;
    this->type = obj.type;
    return (*this);
}

