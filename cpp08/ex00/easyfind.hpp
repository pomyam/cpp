#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

class CantFind : public std::exception {
        public:
        virtual const char* what() const throw() {
            return "Can't find";
        };
    };

template<typename T>
typename T::iterator easyfind(T &container, int value)
{
    if (std::find(container.begin(), container.end(), value) == container.end())
        throw CantFind();
    return std::find(container.begin(), container.end(), value);

}

#endif
