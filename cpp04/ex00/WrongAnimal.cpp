#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "Constructor WrongAnimal is created!" << std::endl;
    this->type = "Unknown";
}

WrongAnimal::WrongAnimal(const WrongAnimal *obj) {
    std::cout << "Copy constructor WrongAnimal is created!" << std::endl;
    this->type = obj->getType();
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor WrongAnimal is created!" << std::endl;
}

void WrongAnimal::makeSound() const{
    std::cout << this->type << " make sound RRRRRRRR" << std::endl;
}

void WrongAnimal::setType(std::string newtype) {
    this->type = newtype;
}

std::string WrongAnimal::getType() const{
    return (this->type);
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj) {
    std::cout << "Assignment class WrongAnimal is used!" << std::endl;
    this->type = obj.type;
    return (*this);
}

