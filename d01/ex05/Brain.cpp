#include "Brain.hpp"


Brain::Brain(void) {

}

Brain::~Brain(void) {

}

std::string	Brain::identify(void) const {
	std::stringstream str;
	str << this;
	return (str.str());
}
