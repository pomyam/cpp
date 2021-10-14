#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie(void) {
	std::cout << this->name << " is dead right now\n";
}

void Zombie::announce() {
	std::cout << name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}

