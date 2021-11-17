#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal {
private:
    Brain *brain;
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat &obj);
    virtual void makeSound() const;
//    void setType(std::string newtype);
    std::string getType();
    Cat &operator=(const Cat &obj);
};


#endif //EX00_CAT_HPP
