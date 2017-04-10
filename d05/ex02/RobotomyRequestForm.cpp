#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src )
{
	*this = src;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	return *this;
}

void RobotomyRequestForm::actionForm(void) const
{
	std::cout << "Makes some drilling noises, and tells us that " << this->_target << " has been robotomized successfully 50% of the time. the rest of times, tells us it’s a failure." << std::endl;
}
