#include <algorithm>
#include <iterator>
#include "span.hpp"

Span::Span(): size(0) {
}

Span::Span(unsigned int size): size(size), array(0) {
}

Span::Span(Span const &obj) {
    *this = obj;
}

Span::~Span() {
}

Span &Span::operator=(Span const &obj) {
	this->size = obj.size;
    this->array = obj.array;
    return *this;
}

void Span::addNumber(int number) {
    if (array.size() == size) throw std::out_of_range("Error: array is full");
    array.push_back(number);
}

int Span::shortestSpan() const {
    std::vector<int> tmp = array;
    if (array.size() <= 1) throw std::logic_error("Error: not enough to span");
    sort(tmp.begin(), tmp.end());
    int res = *(tmp.begin() + 1) - *tmp.begin();
    if (size == 2) return res;
	else {
		for (std::vector<int>::iterator it = tmp.begin() + 1; it != tmp.end() - 1 && res > 0; it++) {
			if (*(it + 1) - *it < res) res = *(it + 1) - *it;
		}
	}
    return res;
}

int Span::longestSpan() const {
    std::vector<int> tmp = array;
    if (array.size() <= 1) throw std::logic_error("Error: not enough to span");
    sort(tmp.begin(), tmp.end());
    return *(tmp.end() - 1) - *tmp.begin();
}

unsigned int Span::sizearr() const {
    return array.size();
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    std::vector<int> tmp(begin, end);
    if (tmp.size() > size - array.size()) throw std::out_of_range("Error: storage don't have enough free space");
    copy(tmp.begin(), tmp.end(), std::back_inserter(this->array));
}
