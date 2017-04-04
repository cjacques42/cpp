#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>

ZombieEvent::ZombieEvent(void) {
	std::cout << "ZombieEvent: created" << std::endl;
}

ZombieEvent::~ZombieEvent(void) {
	std::cout << "ZombieEvent: delete" << std::endl;
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	Zombie		*zomboy = new Zombie(name, this->_type);
	zomboy->announce();
	return	(zomboy);
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

void	ZombieEvent::randomChump(void) {
	Zombie			*tmp;
	std::string		str;

	str << "B" << "ob";
	tmp = newZombie(str);
	delete tmp;
}
