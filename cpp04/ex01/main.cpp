#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    Animal *animals[10];
    for (int i = 0; i < 5; i++)
        animals[i] = new Cat();
    for (int i = 5; i < 10; i++)
        animals[i] = new Dog();
    for (int i = 0; i < 10; i++)
        animals[i]->makeSound();
    for (int i = 0; i < 10; i++)
        delete animals[i];
    std::cout << "---------------------" << std::endl;
    std::cout << "\n     Tests of classes \n";
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    std::cout << "---------------------" << std::endl;
    std::cout << "\n     Tests of copy constructors \n";
    Dog basic;
    std::cout << "---------------------" << std::endl;
    Dog tmp = basic;
    std::cout << "---------------------" << std::endl;
    return 0;
}
