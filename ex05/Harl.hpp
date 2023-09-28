#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

typedef std::string string;

class Harl {
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	void complain(string level);
};


#endif
