#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
}

HumanB::~HumanB(void) {

}

void HumanB::attack() {
	std::cout << this->name << " attacks with his " << this->type->getType() << std::endl;
};

void HumanB::setWeapon(Weapon &type) {
	this->type = &type;
}

