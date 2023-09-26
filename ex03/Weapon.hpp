#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

typedef std::string string;

class Weapon {
private:
	string type;
public:
	const string &getType();
	void setType(string newType);
};


#endif
