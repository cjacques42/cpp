#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name, std::string color) : height(0.8), weight(30), _name(name), _color(color) {
	std::cout << "A beautiful pony is born. His name is " << name << std::endl;
}

Pony::~Pony(void) {
	std::cout << "Your pony " << this->_name << " is dead. RIP" << std::endl;
}

void	Pony::drink(void) {
	std::cout << this->_name << " drinks water." << std::endl;
}

float	Pony::jump(void) {
	return (this->height * 0.3);
}
