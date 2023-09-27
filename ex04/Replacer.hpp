#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <iostream>
#include <fstream>

typedef std::string string;

class Replacer {
public:
	string inName;
	string outName;

	Replacer();
	void	setName(string name);
	string	replaceString(string buff, string from, string to);
	int		replaceFile(string from, string to);
};

#endif