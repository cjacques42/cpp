#ifndef RobotomyRequestForm_hpp
#define RobotomyRequestForm_hpp

# include <iostream>

class RobotomyRequestForm : public Form
{

public:
	RobotomyRequestForm(  std::string );
	RobotomyRequestForm( RobotomyRequestForm const & src );
	~RobotomyRequestForm( void );

	RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );

private:
	std::string _target;

	RobotomyRequestForm( void );

protected:
	virtual void actionForm(void) const;

};

#endif
