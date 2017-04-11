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
	(void)rhs;
	return *this;
}

void ShrubberyCreationForm::actionForm(void) const
{
	std::ofstream file(this->_target + "_shrubbery");
	file << "               ,@@@@@@@,\n       ,,,.   ,@@@@@@/@@,  .oo8888o.\n    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n   `&%\\ ` /%&'    |.|        \\ '|8'\n       |o|        | |         | |\n       |.|        | |         | |\n    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n" << std::endl;
	std::cout << "Create a file called " << this->_target << "_shrubbery, and write ASCII trees inside it, in the current directory" << std::endl;
	file.close();
}
