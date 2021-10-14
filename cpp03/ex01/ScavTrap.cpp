#include "ScavTrap.hpp"

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "First constructor ScavTrap called" << std::endl;
	name(name);
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}
