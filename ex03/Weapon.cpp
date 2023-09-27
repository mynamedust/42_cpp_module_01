#include "Weapon.hpp"

Weapon::Weapon(void) {
}

Weapon::Weapon(string type) {
	this->type = type;
}

const string &Weapon::getType() {
	return type;
}

void Weapon::setType(string newType) {
	type = newType;
}