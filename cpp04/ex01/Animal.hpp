#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP
#include <iostream>

class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal *obj);
    virtual void makeSound() const;
    void setType(std::string newtype);
    std::string getType() const;
    Animal &operator=(const Animal &obj);
};

#endif //EX00_ANIMAL_HPP
