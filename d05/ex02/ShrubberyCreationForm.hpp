#ifndef ShrubberyCreationForm_hpp
#define ShrubberyCreationForm_hpp

# include <iostream>

class ShrubberyCreationForm : public Form
{

public:
	ShrubberyCreationForm(  std::string );
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	~ShrubberyCreationForm( void );

	ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );

private:
	std::string _target;

	ShrubberyCreationForm( void );

protected:
	virtual void actionForm(void) const;

};

#endif
