#include "Zombie.hpp"

int main() {
	Zombie *tmp = zombieHorde(10, "John");
	for (int i = 0; i < 10; i++)
		tmp[i].announce();
	delete[] tmp;
	return 0;
}
