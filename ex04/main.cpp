#include "Replacer.hpp"

int err(string message) {
	std::cerr << message << std::endl;
	return 1;
}

int main(int argc, char **argv) {
	Replacer replacer;

	if (argc < 4 || std::string(argv[2]).empty())
		return err("Invalid input arguments.");
	replacer.setName(argv[1]);
	return replacer.replaceFile(argv[2], argv[3]);
}