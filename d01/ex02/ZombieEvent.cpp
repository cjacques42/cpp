#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
	std::cout << "ZombieEvent: created" << std::endl;
	srand((unsigned int)time(NULL));
}

ZombieEvent::~ZombieEvent(void) {
	std::cout << "ZombieEvent: delete" << std::endl;
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	Zombie		*zomboy = new Zombie();
	zomboy->name = name;
	zomboy->type = this->_type;
	return (zomboy);
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

void	ZombieEvent::randomChump(void) {
	std::string		tab[10] = {"Avy", "Bao", "Lee", "Dan", "Lou", "Ray", "Rex", "Sid", "Taj", "Yao"};
	int				nbr;

	nbr = rand() % 10;
	Zombie			zomboy = Zombie();
	zomboy.name = tab[nbr];
	zomboy.type = this->_type;
	zomboy.announce();
}
