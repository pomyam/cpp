#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av) {
	if (ac != 4) {
		std::cerr << "Error: you should type 3 arguments!" << std::endl;
		return (1);
	}
	if (av[2][0] == '\0' || av[3][0] == '\0') {
		std::cerr << "Error: you should type not empty arguments!\n";
		return (1);
	}
	std::string str = av[1], s1 = av[2], s2 = av[3], line;
	std::ifstream in(str);
	if (!in) {
		std::cerr << "Can't open in file!" << std::endl;
		return (1);
	}
	std::ofstream out;
	out.open(strcat(av[1], ".replace"));
	if (!out) {
		in.close();
		std::cerr << "Can't open out file!" << std::endl;
		return (1);
	}
	while (getline(in, line))
		line == s1 ? out << s2 << std::endl : out << line << std::endl;
	out.close();
	in.close();
	return 0;
}
