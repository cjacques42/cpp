#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : N(N) {
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
	std::cout << "ZombieHorde: created" << std::endl;
	this->_horde = new Zombie[N];
	for (int i = 0; i < this->N; i++) {
		nbr = rand() % 10;
		this->_horde[i].name = tab[nbr];
		this->_horde[i].type = "dead";
	}
}

ZombieHorde::~ZombieHorde(void) {
	delete [] this->_horde;
	std::cout << "ZombieHorde: delete" << std::endl;
}

void	ZombieHorde::announce(void) {
	for (int i = 0; i < this->N; i++) {
		this->_horde[i].announce();
	}
}
