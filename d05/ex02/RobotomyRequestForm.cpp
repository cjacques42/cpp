#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "Makes some drilling noises, and tells us that " << target << " has been robotomized successfully 50% of the time. the rest of times, tells us it’s a failure." << std::endl;
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
