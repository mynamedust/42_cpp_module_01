#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon& weapon): _name(name), _weapon(weapon) {
}

void HumanA::attack() {
	if (_weapon.getType() == "")
		std::cout << _name << " doesn't armed." << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}