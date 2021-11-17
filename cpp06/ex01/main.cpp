#include<iostream>

struct Data {
	int number;
};

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}
int main() {
	Data *a = new Data();
	a->number = 5676545;
    uintptr_t ptr = serialize(a);
	std::cout << a->number << std::endl;
	std::cout << deserialize(ptr)->number << std::endl;
	delete a;
}