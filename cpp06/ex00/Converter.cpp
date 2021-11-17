#include "Converter.hpp"

Converter::Converter(std::string const str) : number(str){
    if (check_except(number))
        print_except(number);
    else if (check_char(number))
        print_char(number);
    else if (check_int(number))
        print_int(number);
    else if (check_float(number))
        print_float(number);
    else
        print_double(number);
}

Converter::~Converter() {

}

Converter::Converter(const Converter &obj) {
    *this = obj;
}

Converter &Converter::operator=(const Converter &obj) {
    this->number = obj.number;
    return (*this);
}

bool Converter::check_except(std::string str) {
    if (str.length() > 1) {
        if (str == "+inf" || str == "-inf" || str == "nan")
            return true;
        for (int i = 0; i < (int)str.length(); i++) {
            if (std::isalpha(str[i]) && str[i] != 'f')
                return true;
        }
        return false;
    }
    return false;
}

bool Converter::check_char(std::string str) {
    return (str.length() == 1 && std::isalpha(str[0]));
}

void Converter::print_char(std::string str) {
    std::cout << "char: " << str << std::endl;
    std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
}

bool Converter::check_int(std::string str) {
    int i = 0;
    if ((str[i] == '-' || str[i] == '+') && str[i + 1])
        i++;
    while (str[i])
    {
        if (!std::isdigit(str[i])) return false;
        i++;
    }
    return true;
}

void Converter::print_int(std::string str) {
    long int num = std::strtol(str.c_str(), NULL, 10);
    if (std::isprint(num)) std::cout << "char: " << static_cast<char>(num) << std::endl;
    else if (isascii(num)) std::cout << "char: non displayable" << std::endl;
    else std::cout << "char: impossible" << std::endl;
    if (num > 2147483647 || num < -2147483648) std::cout << "int: " << atoi(str.c_str()) << std::endl;
    else std::cout << "int: " << num << std::endl;
    std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
}

bool Converter::check_float(std::string str) {
    int i = 0;
    if ((str[i] == '-' || str[i] == '+') && str[i + 1])
        i++;
    while (str[i] != 'f')
    {
        if (!std::isdigit(str[i]) && str[i] != '.') return false;
        i++;
    }
    return true;
}

void Converter::print_float(std::string str) {
    float num = atof(str.c_str());
    if (std::isprint(num)) std::cout << "char: " << static_cast<char>(num) << std::endl;
    else if (isascii(num)) std::cout << "char: non displayable" << std::endl;
    else std::cout << "char: impossible" << std::endl;
    if (num > 2147483647 || num < -2147483648) std::cout << "int: " << atoi(str.c_str()) << std::endl;
    else std::cout << "int: " << static_cast<int>(num) << std::endl;
    if(num - (int)num != 0) {
        std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
        std::cout << "double: "<< static_cast<double>(num) << std::endl;
    }
    else {
        std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
    }
}

void Converter::print_double(std::string str) {
    float num = atof(str.c_str());
    if (std::isprint(num)) std::cout << "char: " << static_cast<char>(num) << std::endl;
    else if (isascii(num)) std::cout << "char: non displayable" << std::endl;
    else std::cout << "char: impossible" << std::endl;
    if (num > 2147483647 || num < -2147483648) std::cout << "int: " << atoi(str.c_str()) << std::endl;
    else std::cout << "int: " << static_cast<int>(num) << std::endl;
    if(num - (int)num != 0) {
        std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
        std::cout << "double: "<< static_cast<double>(num) <<  std::endl;
    }
    else {
        std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
    }
}

void Converter::print_except(std::string str) {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (str.length() > 1) {
        if (str == "+inf" || str == "-inf" || str == "nan") {
            std::cout << "float: " << str << "f" << std::endl;
            std::cout << "double: " << str << std::endl;
        }
        else {
            for (int i = 0; i < (int)str.length(); i++) {
                if (std::isalpha(str[i])) {
                    std::cout << "float: impossible" << std::endl;
                    std::cout << "double: impossible" << std::endl;
                    return;
                }
            }
        }
    }
}
