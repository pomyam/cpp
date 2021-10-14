#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Zombie {
private:
	std::string name;
public:
	Zombie(std::string name);
	~Zombie(void);
	void announce( void );
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif //EX00_ZOMBIE_H
