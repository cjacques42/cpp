#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap {

public:

	unsigned int hit_points;
	unsigned int max_hit_points;
	unsigned int energy_points;
	unsigned int max_energy_points;
	unsigned int level;
	std::string name;
	unsigned int melee_attack_damage;
	unsigned int ranged_attack_damage;
	unsigned int armor_damage_reduction;

	ScavTrap(std::string);
	ScavTrap(ScavTrap const &);
	ScavTrap &operator=(ScavTrap const &);
	~ScavTrap(void);

	void rangedAttack(std::string const &);
	void meleeAttack(std::string const &);
	void takeDamage(unsigned int);
	void beRepaired(unsigned int);
	void challengeNewcomer(void);

};

#endif
