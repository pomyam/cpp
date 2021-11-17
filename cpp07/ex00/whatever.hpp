#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP

//swap
template <typename T>
void swap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}
//max
template <typename T>
const T& max(const T& a, const T& b) {
    return (a > b) ? a : b;
}
//min
template <typename T>
const T& min(const T& a, const T& b) {
    return (a < b) ? a : b;
}
#endif
