#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon(void) {

}

std::string const &Weapon::getType(void) {
	return (this->type);
}

void Weapon::setType(std::string const &newType) {
	this->type = newType;
}