#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array {
private:
    T* array;
    int length;

public:
    Array() : array(NULL), length(0) {};
    Array(unsigned int n) {this->array = new T[n]; this->length = n;};
    Array(Array<T> const &obj): array(NULL), length(0) {*this = obj;};
    virtual ~Array() {if (this->length) delete[] this->array;};

    Array &operator=(Array<T> const &obj);
    T& operator[](int index);

    int size() const {return (this->length);};
    class OutOfArray : public std::exception {
    public:
        virtual const char* what() const throw() {
			return "Trying to access index out of array";
		};
    };
};

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &obj) {
	if (this->length) {
		delete[] this->array;	
		this->array = NULL;
	}
	this->length = obj.length;
	if (obj.length > 0)
	{
		this->array = new T[obj.length];
		for (int i = 0; i < obj.length ; i++)
			this->array[i] = obj.array[i];
	}
	return (*this);
}

template<typename T>
T& Array<T>::operator[](int index) {
	if (index < this->length && index >= 0) return (this->array[index]);
	else throw OutOfArray();
}

#endif