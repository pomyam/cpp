#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::~Zombie(void) {
	std::cout << this->name << " is dead right now\n";
}

void Zombie::announce() {
	std::cout << name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::getName(std::string name) {
	this->name = name;
}

