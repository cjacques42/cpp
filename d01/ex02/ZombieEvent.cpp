#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
	std::cout << "ZombieEvent: created" << std::endl;
	srand((unsigned int)time(NULL));
}

ZombieEvent::~ZombieEvent(void) {
	std::cout << "ZombieEvent: delete" << std::endl;
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	Zombie		*zomboy = new Zombie(name, this->_type);
	return (zomboy);
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

void	ZombieEvent::randomChump(void) {
	std::string		tab[10];
	int				nbr;

	tab[0] = "Avy";
	tab[1] = "Bao";
	tab[2] = "Lee";
	tab[3] = "Dan";
	tab[4] = "Lou";
	tab[5] = "Ray";
	tab[6] = "Rex";
	tab[7] = "Sid";
	tab[8] = "Taj";
	tab[9] = "Yao";
	nbr = rand() % 10;
	Zombie			zomboy = Zombie(tab[nbr], this->_type);
	zomboy.announce();
}
