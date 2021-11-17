#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "Constructor WrongCat is created!" << std::endl;
    this->type = "Cat";
}

WrongCat::WrongCat(const WrongAnimal *obj) {
    std::cout << "Copy constructor WrongCat is created!" << std::endl;
    this->type = obj->getType();
//    *this = obj;
}

WrongCat::~WrongCat() {
    std::cout << "Destructor WrongCat is created!" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << this->type << " make sound MEOW" << std::endl;
}

//void Cat::setType(std::string newtype) {
//    this->type = newtype;
//}

std::string WrongCat::getType() {
    return (this->type);
}

WrongCat &WrongCat::operator=(const WrongCat &obj) {
    std::cout << "Assignment class Cat is used!" << std::endl;
    this->type = obj.type;
    return (*this);
}

