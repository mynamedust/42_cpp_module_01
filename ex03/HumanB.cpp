#include "./HumanB.hpp"

HumanB::HumanB(string name): _name(name) {
	_weapon = NULL;
}

void HumanB::attack() {
	if ((*_weapon).getType() == "")
		std::cout << _name << " doesn't armed." << std::endl;
	else
		std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}