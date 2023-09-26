#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main() {
	Zombie *horde = zombieHorde(5, "Robert");
	delete[] horde;
	horde = zombieHorde(0, "Sergio");
	system("leaks horde");
	return 0;
}
