#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : hit_points(100), max_hit_points(100), energy_points(50), max_energy_points(50), level(1), name(name), melee_attack_damage(20), ranged_attack_damage(15), armor_damage_reduction(3) {
	std::cout << "SC4V-TP " << name << " : Constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	*this = src;
	std::cout << "SC4V-TP " << this->name << " : Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "SC4V-TP " << name << " : Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
	if (this != &rhs) {
		this->hit_points = rhs.hit_points;
		this->max_hit_points = rhs.max_hit_points;
		this->energy_points = rhs.energy_points;
		this->max_energy_points = rhs.max_energy_points;
		this->level = rhs.level;
		this->name = rhs.name;
		this->melee_attack_damage = rhs.melee_attack_damage;
		this->ranged_attack_damage = rhs.ranged_attack_damage;
		this->armor_damage_reduction = rhs.armor_damage_reduction;
	}
	std::cout << "SC4V-TP " << this->name << " : Assignation operator called" << std::endl;
	return *this;
}

void ScavTrap::rangedAttack(std::string const &target) {
	std::cout << "SC4V-TP " << this->name << " attacks " << target << " at range, causing " << this->ranged_attack_damage << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) {
	std::cout << "SC4V-TP " << this->name << " attacks " << target << " at melee, causing " << this->melee_attack_damage << " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	unsigned int damage;

	if (this->armor_damage_reduction > amount)
		damage = 0;
	else
		damage = amount - this->armor_damage_reduction;
	if (this->hit_points < damage)
		this->hit_points = 0;
	else
		this->hit_points -= damage;
	std::cout << "SC4V-TP " << this->name << " takes " << amount << " points of damage, but he have " << this->armor_damage_reduction << " armor damage reduction ! HP: " << this->hit_points << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (this->hit_points + amount > this->max_hit_points)
		this->hit_points = this->max_hit_points;
	else
		this->hit_points += amount;
	std::cout << "SC4V-TP " << this->name << " repair " << amount << " hit points ! HP: " << this->hit_points << std::endl;
}

void ScavTrap::challengeNewcomer(void) {
	int i = rand() % 6;
	std::string tab[6];

	tab[0] = "eat an entire raw onion";
	tab[1] = "see how many stacked Oreos you can fit into your mouth";
	tab[2] = "eat an entire chili pepper";
	tab[3] = "lick your elbow";
	tab[4] = "spend an entire day without using their thumbs";
	tab[5] = "eat a spoonful of cinnamon";
	std::cout << "SC4V-TP " << this->name << " suggest a challenge : " << tab[i] << std::endl;
}
