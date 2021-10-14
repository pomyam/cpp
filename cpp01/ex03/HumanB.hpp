#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
private:
	Weapon *type;
	std::string name;
public:
	HumanB(std::string name);
	~HumanB(void);
	void attack();
	void setWeapon(Weapon &type);
};

#endif
