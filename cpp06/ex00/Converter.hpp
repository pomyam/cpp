#ifndef EX00_CONVERTER_HPP
#define EX00_CONVERTER_HPP
#include <iostream>
#include <cstring>
#include <cstdlib>

class Converter {
private:
    Converter();
    std::string number;
public:
    // Ortodoxal form
    Converter(std::string str);
    ~Converter();
    Converter(const Converter &obj);
    Converter &operator=(const Converter &obj);

    // Checkers
    bool check_except(std::string str);
    bool check_char(std::string str);
    bool check_int(std::string str);
    bool check_float(std::string str);

    // Print
    void print_char(std::string str);
    void print_int(std::string str);
    void print_float(std::string str);
    void print_double(std::string str);
    void print_except(std::string str);
};


#endif //EX00_CONVERTER_HPP
