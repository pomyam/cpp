#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newtype) : type(newtype){
	this->name = name;
}

HumanA::~HumanA(void) {

}

void HumanA::attack() {
	std::cout << this->name << " attacks with his " << this->type.getType() << std::endl;
};
