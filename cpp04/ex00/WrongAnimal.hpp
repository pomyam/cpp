#ifndef EX00_WRONGANIMAL_HPP
#define EX00_WRONGANIMAL_HPP
#include "iostream"

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal *obj);
    void makeSound() const;
    void setType(std::string newtype);
    std::string getType() const;
    WrongAnimal &operator=(const WrongAnimal &obj);
};


#endif //EX00_WRONGANIMAL_HPP
