#ifndef Form_hpp
#define Form_hpp

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form
{
public:

	Form( std::string, int, int );
	Form( Form const & src );
	~Form( void );

	Form & operator=( Form const & rhs );
	std::string const getName()const;
	bool getIsSigned()const;
	int const getGradeToSign()const;
	int const getGradeToExec()const;

	void beSigned(Bureaucrat &);
	void execute(Bureaucrat const &) const;

	class GradeTooHighException : public std::exception {
    public:
        GradeTooHighException(void);
    	GradeTooHighException(GradeTooHighException const &);
    	GradeTooHighException &operator=(GradeTooHighException const &);
    	~GradeTooHighException(void) throw();

        virtual const char *what(void) const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        GradeTooLowException(void);
    	GradeTooLowException(GradeTooLowException const &);
    	GradeTooLowException &operator=(GradeTooLowException const &);
    	~GradeTooLowException(void) throw();

        virtual const char *what(void) const throw();
    };

private:

	Form( void );

	std::string const _name;
	bool _isSigned;
	int const _gradeToSign;
	int const _gradeToExec;

protected:
	virtual void actionForm(void) const = 0;

};

std::ostream &operator<<(std::ostream &, Form const &);

#endif
