#include "Karen.hpp"

int main() {
	std::string str;
	Karen karen;
	while (getline(std::cin, str))
		karen.complain(str);
}
