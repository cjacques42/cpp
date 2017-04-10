#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src )
{
	*this = src;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	return *this;
}

void RobotomyRequestForm::actionForm(void) const
{
	std::cout << "Create a file called " << this->target << "_shrubbery, and write ASCII trees inside it, in the current directory" << std::endl;
}