#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP
#include <iostream>
#include <string>
class ClapTrap {
private:
	std::string name;
	int hit_points;
	int energy_points;
	int attack_damage;
public:
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &trap);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap &operator=(ClapTrap const &obj);
};

#endif //EX00_CLAPTRAP_HPP
