#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Constructor Brain is created!" << std::endl;
}

Brain::Brain(const Brain &obj) {
    std::cout << "Copy constructor Brain is created!" << std::endl;
    *this = obj;
}

Brain::~Brain() {
    std::cout << "Destructor Brain is created!" << std::endl;
}

Brain &Brain::operator=(const Brain &obj) {
    std::cout << "Assignment class Brain is used!" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];
    return (*this);
}

