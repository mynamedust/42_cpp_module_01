#include "Zombie.h"

Zombie *newZombie(std::string name) {
	Zombie *zombie;

	zombie = new Zombie(name);
	return zombie;

}

void randomChump(std::string name) {
	Zombie zombie(name);

	zombie.announce();
}

int main() {

		Zombie *z = newZombie("z");
		z->announce();
		delete z;
		randomChump("Vitalik");
//		system("leaks zombie");



	return 0;
}
