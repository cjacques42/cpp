#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Sorcerer.hpp"
# include "Victim.hpp"
# include <iostream>

class Sorcerer {

public:

	Sorcerer(std::string, std::string);
	Sorcerer(Sorcerer const &);
	Sorcerer &operator=(Sorcerer const &);
	~Sorcerer(void);

    std::string getName(void) const;
    std::string getTitle(void) const;

	void polymorph(Victim const &) const;

private:

    Sorcerer(void);
    std::string _name;
    std::string _title;

};

std::ostream &operator<<(std::ostream &o, Sorcerer const &i);

#endif
