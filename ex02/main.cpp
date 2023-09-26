#include <iostream>

int main() {
	typedef std::string string;

	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF (str);

	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std:: cout << stringREF << std::endl;
}