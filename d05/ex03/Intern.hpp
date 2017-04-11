#ifndef Intern_hpp
#define Intern_hpp

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

class Intern
{
public:
	Intern( void );
	Intern( Intern const & src );
	virtual ~Intern( void );

	Intern & operator=( Intern const & rhs );
	Form *makeForm( std::string, std::string );

};

#endif
