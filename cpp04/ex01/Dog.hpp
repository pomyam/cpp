#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal {
private:
    Brain *brain;
public:
    Dog();
    virtual ~Dog();
    Dog(const Dog &obj);
    virtual void makeSound() const;
	void setType(std::string newtype);
    std::string getType();
    Dog &operator=(const Dog &obj);
};


#endif //EX00_DOG_HPP
