//
// Created by darya on 23.10.2021.
//

#ifndef EX00_WRONGCAT_HPP
#define EX00_WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
    WrongCat();
    virtual ~WrongCat();
    WrongCat(const WrongAnimal *obj);
    void makeSound() const;
//    void setType(std::string newtype);
    std::string getType();
    WrongCat &operator=(const WrongCat &obj);
};


#endif //EX00_WRONGCAT_HPP
