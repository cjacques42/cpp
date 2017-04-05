#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human 
{
	public:
		Brain brain;

		Human(void);
		Brain getBrain(void);
		std::string identify(void);
};

#endif
