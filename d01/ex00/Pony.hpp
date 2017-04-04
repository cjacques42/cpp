#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony {

public:

	float			height;
	float			weight;

	Pony(std::string, std::string);
	~Pony(void);
	void	drink(void);
	float	jump(void);

private:

	std::string		_name;
	std::string		_color;

};

#endif
