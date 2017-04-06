#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap {

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

	FragTrap(std::string);
	FragTrap(FragTrap const &);
	FragTrap &operator=(FragTrap const &);
	~FragTrap(void);

	void rangedAttack(std::string const &);
	void meleeAttack(std::string const &);
	void takeDamage(unsigned int);
	void beRepaired(unsigned int);

	void vaulthunter_dot_exe(std::string const &);

};

#endif
