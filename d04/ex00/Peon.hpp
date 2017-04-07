#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim {

public:

    Peon(std::string);
	Peon(Peon const &);
	Peon &operator=(Peon const &);
	~Peon(void);

    virtual void getPolymorphed(void) const;

private:

    Peon(void);

};

#endif
