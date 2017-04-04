#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type) {
	std::cout << "This Zombie " << name <<" is new." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "This Zombie " << this->name <<" is dead." << std::endl;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}
