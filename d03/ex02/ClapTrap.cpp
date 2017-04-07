#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : hit_points(100), max_hit_points(100), energy_points(100), max_energy_points(100), level(1), name(name), melee_attack_damage(30), ranged_attack_damage(20), armor_damage_reduction(5) {
	std::cout << "FR4G-TP " << name << " : Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	*this = src;
	std::cout << "FR4G-TP " << this->name << " : Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "FR4G-TP " << name << " : Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
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
	std::cout << "FR4G-TP " << this->name << " : Assignation operator called" << std::endl;
	return *this;
}

void ClapTrap::rangedAttack(std::string const &target) {
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " << this->ranged_attack_damage << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target) {
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at melee, causing " << this->melee_attack_damage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	unsigned int damage;

	if (this->armor_damage_reduction > amount)
		damage = 0;
	else
		damage = amount - this->armor_damage_reduction;
	if (this->hit_points < damage)
		this->hit_points = 0;
	else
		this->hit_points -= damage;
	std::cout << "FR4G-TP " << this->name << " takes " << amount << " points of damage, but he have " << this->armor_damage_reduction << " armor damage reduction ! HP: " << this->hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hit_points + amount > this->max_hit_points)
		this->hit_points = this->max_hit_points;
	else
		this->hit_points += amount;
	std::cout << "FR4G-TP " << this->name << " repair " << amount << " hit points ! HP: " << this->hit_points << std::endl;
}

void ClapTrap::vaulthunter_dot_exe(std::string const & target) {
	unsigned int energy = 25;
	int i = rand() % 6;
	std::string tab[6] = {"Feint", "Spark", "Nuzzle", "Discharge", "Slam", "Thunderbolt"};

	std::cout << "FR4G-TP " << this->name;
	if (this->energy_points >= energy) {
		this->energy_points -= energy;
		std::cout << " uses " << tab[i] << " attack on " << target << ". Energy: " << this->energy_points << std::endl;
		return;
	}
	std::cout << " want to attack " << target << " but is out of energy. Energy: " << this->energy_points << std::endl;
}
