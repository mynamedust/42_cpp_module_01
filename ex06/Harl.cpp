#include "Harl.hpp"

void Harl::debug() {
	std::cout << "[ DEBUG ]\n\tNo hugging, only debugging." << std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]\n\tNo show, just info." << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]\n\tNo hand-holding, just warning." << std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]\n\tNo pardon, just error." << std::endl;
}

void Harl::complain(string level) {
	void (Harl::*methods[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	for (;i < 4; i++) {
		if (level == levels[i])
			break;
	}
	switch (i) {
		case 0:
			(this->*methods[0])();
		case 1:
			(this->*methods[1])();
		case 2:
			(this->*methods[2])();
		case 3:
			(this->*methods[3])();
			break;
		default:
			std::cout << "Undefined level." << std::endl;
	}
}