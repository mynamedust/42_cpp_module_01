#include "Zombie.hpp"

void Zombie::setName(std::string name) {
	this->name = name;
	this->announce();
}

Zombie::~Zombie() {
	std::cout << name << " died. Don't cry, he'll be back." << std::endl;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;

}

Zombie::Zombie() {}