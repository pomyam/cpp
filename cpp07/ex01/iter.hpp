#ifndef ITER_HPP
#define ITER_HPP

template <typename T1, typename T2, typename T3>
void iter(T1 *array, T2 length , T3 func) {
    for (int i = 0; i < length; i++)
        func(array[i]);
}

#endif