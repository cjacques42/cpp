#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
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

void PresidentialPardonForm::actionForm(void) const
{
	std::cout << "Tells us " << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
