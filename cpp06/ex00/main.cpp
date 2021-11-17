#include "Converter.hpp"
#include <cstdio>
#include <limits>
int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "Error: wrong number of arguments!" << std::endl;
        return 1;
    }
    Converter conv(av[1]);
    // Char
//    char a = av[1][0];
//    std::cout << "Char1: " << av[1] << std::endl;
//    printf("Int1: %d\n", static_cast<int>(a));
//    printf("Float1: %f\n",  static_cast<float>(a));
//    printf("Double1: %ff\n", static_cast<double>(a));

    // Int
//    std::cout << "Char1: " << static_cast<char>(2147483648) << std::endl;
//    printf("Int1: %d\n", atoi("2147483649"));
//    printf("Float1: %f\n", (float)2147483648);
//    printf("Double1: %ff\n", (double)2147483648);

    // Float
//    float f = 42.0f;
//    std::cout << "Char1: " << static_cast<char>(f) << std::endl;
//    printf("Int1: %d\n", (int)f);
//    printf("Float1: %f\n", f);
//    printf("Double1: %ff\n", (double)f);

    // Double
//    double d = 42.0;
//    std::cout << "Char1: " << static_cast<char>(d) << std::endl;
//    printf("Int1: %d\n", (int)d);
//    printf("Float1: %f\n", (float)d);
//    printf("Double1: %ff\n", d);

//     Nan
    // std::cout << "Char1: " << std::numeric_limits<char>::quiet_NaN() << std::endl;
    // printf("Int1: %d\n", std::numeric_limits<int>::quiet_NaN());
    // printf("Float1: %f\n", std::numeric_limits<float>::quiet_NaN());
    // printf("Double1: %ff\n", std::numeric_limits<double>::quiet_NaN());

//    Nanf
    // std::cout << "Char1: " << 0/0 << std::endl;
    // printf("Int1: %d\n", 0/0);
    // printf("Float1: %f\n", 0/0);
    // printf("Double1: %ff\n", 0/0);
    return 0;
}
