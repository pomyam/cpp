#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap a("John");
	ClapTrap b("Kevin");
	ClapTrap c ( a );
	a.takeDamage(3);
	a.attack("Kevin");
	a.takeDamage(3);
	a.beRepaired(2);
	b.takeDamage(10);
	return 0;
}
