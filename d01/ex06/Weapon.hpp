#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {

public:

	Weapon(std::string);
	~Weapon(void);

	std::string const &getType() const ;
	void setType(std::string weapon);

private:

	std::string _weapon;

};

#endif
