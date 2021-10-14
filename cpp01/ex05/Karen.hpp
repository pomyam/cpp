#ifndef EX05_KAREN_H
#define EX05_KAREN_H
#include <iostream>
#include <string>

class Karen {
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Karen();
	~Karen();
	void complain( std::string level );
};


#endif
