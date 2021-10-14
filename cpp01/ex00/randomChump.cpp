#include "Zombie.hpp"

void	randomChump(std::string name){
	Zombie *tmp = newZombie(name);
	tmp->announce();
	delete tmp;
}