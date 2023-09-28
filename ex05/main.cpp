#include "Harl.hpp"
#include <sstream>

int main() {
	string tests[5][4] = {
			{"DEBUG", "No hugging, only debugging.\n"},
			{"INFO", "No show, just info.\n"},
			{"WARNING", "No hand-holding, just warning.\n"},
			{"ERROR", "No pardon, just error.\n"},
			{"U2dDa", "Undefined level.\n"}
	};
	Harl harl;
	std::ostringstream buffer;
	std::streambuf* oldStdout = std::cout.rdbuf();

	std::cout.rdbuf(buffer.rdbuf());
	for (int i = 0; i < 5; i++) {
		buffer.str("");
		harl.complain(tests[i][0]);
		tests[i][2] = buffer.str();
		tests[i][3] = tests[i][2] == tests[i][1] ? "SUCCESS" : "FAILED";
	}
	std::cout.rdbuf(oldStdout);
	for (int i = 0; i < 5; i++) {
		std::cout << "Test #" << i + 1 << "\t" << tests[i][3] << std::endl;
		if (tests[i][3] == "FAILED") {
			std::cout << "\tInput: \"" << tests[i][0] << "\"" << std::endl;
			std::cout << "\tExpected: " << tests[i][1];
			std::cout << "\tOutput: " << tests[i][2];
		}
	}
	return 0;
}