#include "mutantstack.hpp"

void try_subject() {
    std::cout << "_____Test of int______-" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Test of top and push" << std::endl;
    std::cout << "Current top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Current size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5345654);
    mstack.push(737);
    mstack.push(-1);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "Test of print" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << std::endl;
}

void try_string() {
    std::cout << "_____Test of string______-" << std::endl;
    MutantStack<std::string> mstack;
    mstack.push("qwe");
    mstack.push("asd");
    std::cout << "Test of top and push" << std::endl;
    std::cout << "Current top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Current size: " << mstack.size() << std::endl;
    mstack.push("zxc");
    mstack.push("poi");
    mstack.push("lkj");
    mstack.push("mnb");
    mstack.push("kek");
    MutantStack<std::string>::iterator it = mstack.begin();
    MutantStack<std::string>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "Test of print" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<std::string> s(mstack);
}

int main()
{
    try_subject();
    try_string();
    return 0;
}
