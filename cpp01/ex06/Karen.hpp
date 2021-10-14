#ifndef EX06_KAREN_H
#define EX06_KAREN_H
#include <iostream>
#include <string>

class Karen {
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	void complain( std::string level );
	void karenFilter( std::string level);
};

#endif
