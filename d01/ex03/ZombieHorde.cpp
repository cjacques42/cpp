#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : N(N) {
	std::string		tab[10] = {"Avy", "Bao", "Lee", "Dan", "Lou", "Ray", "Rex", "Sid", "Taj", "Yao"};
	int				nbr;

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
