#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Constructor Dog is created!" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Animal *obj) {
    std::cout << "Copy constructor Dog is created!" << std::endl;
    this->type = obj->getType();
   //*this = obj;
}

Dog::~Dog() {
    std::cout << "Destructor Dog is created!" << std::endl;
}

void Dog::makeSound() const {
    std::cout << this->type << " make sound WOOF" << std::endl;
}

//void Dog::setType(std::string newtype) {
//    this->type = newtype;
//}

std::string Dog::getType() {
    return (this->type);
}

Dog &Dog::operator=(const Dog &obj) {
    std::cout << "Assignment class Dog is used!" << std::endl;
    this->type = obj.type;
    return (*this);
}

