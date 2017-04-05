#include "Weapon.hpp"

Weapon::Weapon(std::string str) : _weapon(str){

}

Weapon::~Weapon(void) {

}

std::string const & Weapon::getType(void) const {
	return this->_weapon;
}

void Weapon::setType(std::string str) {
	this->_weapon = str;
}
