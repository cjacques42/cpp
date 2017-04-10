#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat {

public:
    Bureaucrat(std::string, int);
	Bureaucrat(Bureaucrat const &);
	Bureaucrat &operator=(Bureaucrat const &);
	virtual ~Bureaucrat(void);
    std::string const getName(void) const;
    int getGrade(void) const;

    void increaseGrade(void);
    void decreaseGrade(void);

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
    Bureaucrat(void);

    std::string const _name;
    int _grade;

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

#endif
