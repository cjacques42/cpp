#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieEvent {

public:

	ZombieEvent(void);
	~ZombieEvent(void);
	Zombie*	newZombie(std::string);
	void	setZombieType(std::string);
	void	randomChump(void);

private:

	std::string		_type;

};

#endif
