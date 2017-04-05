#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human 
{
	public:
		Human(void);
		~Human(void);
		Brain const &getBrain(void) const;
		std::string identify(void);

	private:
		Brain const _brain;
};

#endif
