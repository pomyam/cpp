#include "Zombie.hpp"

int main() {
	Zombie* firstZombie = newZombie("Mark");
	firstZombie->announce();
	delete firstZombie;

	newZombie("Kate")->announce();
	newZombie("Anne")->announce();

	randomChump("David");
	randomChump("Katrin");
	return 0;
}
