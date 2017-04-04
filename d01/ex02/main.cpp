#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main() {
	ZombieEvent		event = ZombieEvent();
	
	std::cout << " - start - " << std::endl;

	event.setZombieType("dead");
	event.randomChump();
	event.setZombieType("alive");
	event.randomChump();

	std::cout << " - end - " << std::endl;
	return (0);
}
