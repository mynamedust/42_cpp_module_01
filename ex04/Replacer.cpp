#include "Replacer.hpp"
int err(string message);

Replacer::Replacer() {}

void Replacer::setName(string name){
	inName = name;
	outName = name + ".replace";
}

string Replacer::replaceString(string buff, string from, string to) {
	std::string	replace;
	size_t position = 0;

	while ((position = buff.find(from, 0)) !=  std::string::npos) {
		replace.append(buff.substr(0, position));
		position += from.size();
		buff = buff.substr(position);
		replace.append(to);
	}
	replace.append(buff);
	return replace;
}

int Replacer::replaceFile(string from, string to) {
	std::ifstream in(inName.c_str());
	if (!in.is_open())
		return err("File opening failed.");
	std::ofstream out(outName.c_str());

	string buff((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
	buff = replaceString(buff, from, to);
	out << buff;
	in.close();
	out.close();
	return 0;
}