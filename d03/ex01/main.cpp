#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void) {
	FragTrap tmp("Corentin");;

	tmp.rangedAttack("a Rock");
	tmp.meleeAttack("a Cow");
	tmp.takeDamage(80);
	tmp.beRepaired(20);
	tmp.takeDamage(45);
	FragTrap ptr(tmp);
	tmp.beRepaired(150);
	tmp.vaulthunter_dot_exe("a pony");

	ScavTrap littleScav("Scavy");
	littleScav.challengeNewcomer();
	littleScav.challengeNewcomer();
	littleScav.challengeNewcomer();
	littleScav.challengeNewcomer();
	littleScav.rangedAttack("a Chicken");
	littleScav.meleeAttack("a Panda");
	littleScav.takeDamage(80);
	littleScav.beRepaired(20);
	littleScav.takeDamage(47);
	ScavTrap chiki(littleScav);
	littleScav.beRepaired(150);

	return (0);
}
