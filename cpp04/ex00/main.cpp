#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
int main() {
    std::cout << "\n    Tests of constructor      \n";
    const Animal* meta = new Animal();
    const Animal* meta1 = new Animal(meta);
    const Animal* j = new Dog();
    const Animal* je = new Dog(j);
    const Animal* i = new Cat();
    const Animal* ii = new Cat(i);
    std::cout << "\n    Tests of type     \n";
    std::cout << meta->getType() << " " << std::endl; //unknown
    std::cout << meta1->getType() << " " << std::endl; //unknown
    std::cout << j->getType() << " " << std::endl; //dog
    std::cout << je->getType() << " " << std::endl; //dog
    std::cout << i->getType() << " " << std::endl; //cat
    std::cout << ii->getType() << " " << std::endl; //cat
    std::cout << "\n    Tests of sounds     \n";
    meta->makeSound(); //will output the unknown sound!
    meta1->makeSound(); //will output the unknown sound!
    j->makeSound(); //will output the dog sound!
    je->makeSound(); //will output the dog sound!
    i->makeSound(); //will output the cat sound!
    ii->makeSound(); //will output the cat sound!
    std::cout << "\n    Tests of wrong virtual     \n";
    const WrongAnimal* an = new WrongAnimal();
    const WrongAnimal* an1 = new WrongAnimal(an);
    const WrongAnimal* cat = new WrongCat();
    const WrongAnimal* cat1 = new WrongCat(cat);
    std::cout << an->getType() << " " << std::endl; //noname
    std::cout << an1->getType() << " " << std::endl; //noname
    std::cout << cat->getType() << " " << std::endl; //cat
    std::cout << cat1->getType() << " " << std::endl; //cat
    an->makeSound(); //will output the rrr sound!
    an1->makeSound(); //will output the rrr sound!
    cat->makeSound(); //will output the rrr sound!
    cat1->makeSound(); //will output the rrr sound!
    std::cout << "\n    Tests of destructors     \n";
    delete meta;
    delete meta1;
    delete j;
    delete je;
    delete i;
    delete ii;
    delete an;
    delete an1;
    delete cat;
    delete cat1;
    return 0;
}
