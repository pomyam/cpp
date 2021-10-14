#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Zombie {
private:
	std::string name;
public:
	Zombie(void);
	~Zombie(void);
	void announce( void );
	void getName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
