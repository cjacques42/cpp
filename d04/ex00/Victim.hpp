#ifndef VICTIM_HPP
# define VICTIM_HPP

# include "Victim.hpp"
# include <iostream>

class Victim {

public:

	Victim(std::string);
	Victim(Victim const &);
	Victim &operator=(Victim const &);
	~Victim(void);

    std::string getName(void) const;
    std::string getTitle(void) const;
    virtual void getPolymorphed(void) const;

protected:

    Victim(void);
    std::string _name;

};

std::ostream &operator<<(std::ostream &o, Victim const &i);

#endif
