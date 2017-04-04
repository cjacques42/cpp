#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	std::cout << "This Zombie " << name <<" is new." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "This Zombie " << this->_name <<" is dead." << std::endl;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
