#include "Karen.hpp"

int main(int ac, char **av) {
	if (ac < 2) {
		std::cerr << "Not enough arguments!" << std::endl;
		return (1);
	}
	if (ac > 2) {
		std::cerr << "Too many arguments!" << std::endl;
		return (1);
	}
	Karen karen;
	karen.karenFilter(av[1]);
}
