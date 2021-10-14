#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Default constructor called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap() {
	std::cout << "Default constructor called" << std::endl;
	this->name = "Noname";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " <<  this->name << " attack " << target
			  << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points--;
	this->hit_points++;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->attack_damage += amount;
	std::cout << "ClapTrap " << this->name << " take damage " << amount
			  << " and now have damage " << this->attack_damage << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->attack_damage += amount;
	std::cout << "ClapTrap " << this->name << " be repaired " << amount
			  << " and now have damage " << this->attack_damage << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}