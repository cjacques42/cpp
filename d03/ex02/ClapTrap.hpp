#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

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

	ClapTrap(std::string);
	ClapTrap(ClapTrap const &);
	ClapTrap &operator=(ClapTrap const &);
	~ClapTrap(void);

	void rangedAttack(std::string const &);
	void meleeAttack(std::string const &);
	void takeDamage(unsigned int);
	void beRepaired(unsigned int);

	void vaulthunter_dot_exe(std::string const &);

};

#endif
