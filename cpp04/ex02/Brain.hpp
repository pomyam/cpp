#ifndef EX01_BRAIN_HPP
#define EX01_BRAIN_HPP
#include "iostream"

class Brain {
private:
    std::string ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain &obj);
    Brain &operator=(const Brain &obj);
};


#endif //EX01_BRAIN_HPP
