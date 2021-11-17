#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
    unsigned int size;
    std::vector<int> array;

public:
    Span();
    Span(unsigned int size);
    Span(const Span &obj);
    ~Span();
    Span &operator=(const Span &obj);

    void addNumber(int number);
    int shortestSpan() const;
    int longestSpan() const;
    unsigned int sizearr() const;
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif
