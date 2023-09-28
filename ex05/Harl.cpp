#include "Harl.hpp"

void Harl::debug() {
	std::cout << "No hugging, only debugging." << std::endl;
}

void Harl::info() {
	std::cout << "No show, just info." << std::endl;
}

void Harl::warning() {
	std::cout << "No hand-holding, just warning." << std::endl;
}

void Harl::error() {
	std::cout << "No pardon, just error." << std::endl;
}

void Harl::complain(string level) {
	void (Harl::*methods[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i])
			return (this->*methods[i])();
	}
	std::cout << "Undefined level." << std::endl;
}