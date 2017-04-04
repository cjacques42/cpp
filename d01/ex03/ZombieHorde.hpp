#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {

public:

	ZombieHorde(int);
	~ZombieHorde(void);
	void announce(void);

private:

	int const		N;
	Zombie			*_horde;

};

#endif
