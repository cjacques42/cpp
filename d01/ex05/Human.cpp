#include "Human.hpp"

Human::Human(void) {
	this->brain = *(new Brain());
}

std::string Human::identify() {
	return (this->brain.identify());
}

Brain Human::getBrain(void) {
	return (this->brain);
}
