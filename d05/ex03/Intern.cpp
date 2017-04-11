#include "Intern.hpp"

Intern::Intern( void )
{
	return;
}

Intern::Intern( Intern const & src )
{
	*this = src;
	return;
}

Intern::~Intern( void )
{
	return;
}

Intern & Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

Form *Intern::makeForm( std::string name, std::string target) {
	if (name == "robotomy request") {
		std::cout << "Intern creates RobotomyRequestForm" << std::endl;
		return new RobotomyRequestForm(target);
	} else if (name == "president request") {
		std::cout << "Intern creates PresidentialPardonForm" << std::endl;
		return new PresidentialPardonForm(target);
	} else if (name == "shrubbery request") {
		std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
		return new ShrubberyCreationForm(target);
	} else {
		std::cout << "Intern, unknow form type" << std::endl;
		return NULL;
	}
}
