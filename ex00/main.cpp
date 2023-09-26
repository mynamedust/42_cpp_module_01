#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main() {
		Zombie *z = newZombie("Oromsim");

		z->announce();
		delete z;
		randomChump("Vazgen");
		system("leaks zombie");
	return 0;
}
