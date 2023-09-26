#include "Weapon.hpp"

const string &Weapon::getType() {
	return type;
}

void Weapon::setType(string newType) {
	type = newType;
}