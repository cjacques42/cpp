#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat {

public:
    Bureaucrat(std::string, int);
	Bureaucrat(Bureaucrat const &);
	Bureaucrat &operator=(Bureaucrat const &);
	~Bureaucrat(void);
    std::string const getName(void) const;
    int getGrade(void) const;

    void increaseGrade(void);
    void decreaseGrade(void);

    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what(void) const throw()
        {
            return ("GradeTooHighException");
        }
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what(void) const throw()
        {
            return ("GradeTooLowException");
        }
    };

private:
    Bureaucrat(void);

    std::string const _name;
    int _grade;

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

#endif
