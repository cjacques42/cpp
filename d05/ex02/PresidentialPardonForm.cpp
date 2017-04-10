#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "Tells us " << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src )
{
	*this = src;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	return *this;
}
