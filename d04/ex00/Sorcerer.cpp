#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {

}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
    std::cout << name <<", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src) {
    *this = src;
}

Sorcerer::~Sorcerer(void) {
    std::cout << this->getName() << ", " << this->getTitle() << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &rhs) {
    if (this != &rhs) {
        this->_title = rhs.getTitle();
        this->_name = rhs.getName();
    }
    return *this;
}

std::ostream &operator<<(std::ostream &o, Sorcerer const &i) {
    o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies !" << std::endl;
    return o;
}

std::string Sorcerer::getName(void) const {
    return this->_name;
}

std::string Sorcerer::getTitle(void) const {
    return this->_title;
}

void Sorcerer::polymorph(Victim const &src) const {
    src.getPolymorphed();
}
