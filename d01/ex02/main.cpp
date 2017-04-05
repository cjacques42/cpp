#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main() {
	ZombieEvent		event = ZombieEvent();
	std::cout << " - start - " << std::endl;
	Zombie			*zombie;

	event.setZombieType("dead");

	zombie = event.newZombie("Bob");
	zombie->announce();
	event.randomChump();
	event.setZombieType("alive");
	event.randomChump();

	delete zombie;

	std::cout << " - end - " << std::endl;
	return (0);
}
