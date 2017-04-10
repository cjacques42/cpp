#ifndef PresidentialPardonForm_hpp
#define PresidentialPardonForm_hpp

# include "Form.hpp"
# include <iostream>

class PresidentialPardonForm : public Form
{

public:
	PresidentialPardonForm( std::string );
	PresidentialPardonForm( PresidentialPardonForm const & src );
	virtual ~PresidentialPardonForm( void );

	PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );

private:
	std::string _target;

	PresidentialPardonForm( void );

protected:
	virtual void actionForm(void) const;

};

#endif
