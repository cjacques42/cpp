#include "Fixed.class.hpp"

Fixed::Fixed(void) : _nbr(0) {

}

Fixed::~Fixed(void) {

}

Fixed::Fixed(Fixed const &src) {
	*this = src;
}

Fixed &Fixed::operator=(Fixed const & rhs) {
	if (this != &rhs)
		this->setRawBits(rhs.getRawBits());
	return *this;
}

int Fixed::getRawBits( void ) const {
	return (this->_nbr);
}

void Fixed::setRawBits( int const raw ) {
	this->_nbr = raw;
}

int const Fixed::_fraction = 8;
