#include <iostream>
#include <time.h>
#include <cstdlib>

class tmp {};

class Base {
public:
    virtual ~Base() {};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate(void) {
    std::srand(time(NULL));
    int a = rand() % 3;
    if (a == 0) return (new A());
    else if (a == 1) return (new B());
    else return (new C());
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) std::cout << "It's A class" << std::endl;
    else if (dynamic_cast<B*>(p)) std::cout << "It's B class" << std::endl;
    else if (dynamic_cast<C*>(p)) std::cout << "It's C class" << std::endl;
    else std::cout << "It's unknown class" << std::endl;
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "It's A class" << std::endl;
    }
    catch (const std::exception& e) {
        try {
        (void)dynamic_cast<B&>(p);
        std::cout << "It's B class" << std::endl;
        }
        catch (const std::exception& e) {
            try {
                (void)dynamic_cast<C&>(p);
                std::cout << "It's C class" << std::endl;
            }
            catch (const std::exception& e) {
                std::cout << "It's unknown class" << std::endl;
            }
        }
    }
}

int main() {
    std::cout << "Test with generate" << std::endl;
    Base* ptr = generate();
    Base& ref = *ptr;
    identify(ptr);
    identify(ref);
    std::cout << "\nTest with unknown class" << std::endl;
    Base tmp;
    Base* nul1 = NULL;
    Base& nul2 = tmp;
    identify(nul1);
    identify(nul2);
    return 0;
}
