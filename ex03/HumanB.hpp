#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	string name;
	Weapon weapon;
public:
	void attack();
	void setWeapon(Weapon weapon);
};


#endif
