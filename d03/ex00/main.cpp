#include "FragTrap.hpp"

int		main(void) {
	FragTrap tmp("Corentin");;

	tmp.rangedAttack("a Rock");
	tmp.meleeAttack("a Cow");
	tmp.takeDamage(80);
	tmp.beRepaired(20);
	tmp.takeDamage(65);
	FragTrap ptr(tmp);
	tmp.beRepaired(142);
	tmp.vaulthunter_dot_exe("Harry Potter");
	tmp.vaulthunter_dot_exe("Ron Weasley");
	tmp.vaulthunter_dot_exe("Hermione Granger");
	tmp.vaulthunter_dot_exe("your Mother");
	tmp.vaulthunter_dot_exe("Donald");

	ptr.name = "GOD";

	return (0);
}
