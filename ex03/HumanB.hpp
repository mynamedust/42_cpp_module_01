#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	string _name;
	Weapon *_weapon;
public:
	HumanB(string name);
	void attack();
	void setWeapon(Weapon &weapon);
};


#endif
