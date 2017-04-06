#include "Fixed.class.hpp"

Fixed::Fixed(void) : _nbr(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nb) {
	std::cout << "Int constructor called" << std::endl;
	this->_nbr = nb << this->_fraction;
}

Fixed::Fixed(float const f) {
	std::cout << "Float constructor called" << std::endl;
	this->_nbr = roundf(f * (float)(1 << this->_fraction));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_nbr = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const {
	return (this->_nbr);
}

void Fixed::setRawBits( int const raw ) {
	this->_nbr = raw;
}

float Fixed::toFloat( void ) const {
	return (this->_nbr / (float)(1 << this->_fraction));
}

int Fixed::toInt( void ) const {
	return (this->_nbr >> this->_fraction);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i) {
	o << i.toFloat();
	return (o);
}

int const Fixed::_fraction = 8;
