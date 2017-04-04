#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

public:

	Zombie(std::string, std::string);
	~Zombie(void);
	void	announce(void);

private:
	std::string		_name;
	std::string		_type;
};

#endif
