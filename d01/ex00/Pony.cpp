#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name) : _name(name) {
	std::cout << "Your pony is dead. RIP" << std::endl;
}

Pony::~Pony(void) {
	std::cout << "Your pony is dead. RIP" << std::endl;
}

