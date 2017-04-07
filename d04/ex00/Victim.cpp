#include "Victim.hpp"

Victim::Victim(void) {

}

Victim::Victim(std::string name) : _name(name) {
    std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::Victim(Victim const &src) {
    *this = src;
}

Victim::~Victim(void) {
    std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

Victim &Victim::operator=(Victim const &rhs) {
    if (this != &rhs) {
        this->_name = rhs.getName();
    }
    return *this;
}

std::ostream &operator<<(std::ostream &o, Victim const &i) {
    o << "I'm " << i.getName() << " and I like otters !" << std::endl;
    return o;
}

void Victim::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::getName(void) const {
    return this->_name;
}
