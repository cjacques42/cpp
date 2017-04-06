#include "Fixed.class.hpp"

Fixed::Fixed(void) : _nbr(0) {
}

Fixed::Fixed(int const nb) {
	this->_nbr = nb << this->_fraction;
}

Fixed::Fixed(float const f) {
	this->_nbr = roundf(f * (float)(1 << this->_fraction));
}

Fixed::~Fixed(void) {
}

Fixed::Fixed(Fixed const &src) {
	*this = src;
}

Fixed &Fixed::operator=(Fixed const & rhs) {
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

bool Fixed::operator>(Fixed const &rhs) const {
	if (this->toFloat() > rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const &rhs) const {
	if (this->toFloat() < rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const &rhs) const {
	if (this->toFloat() >= rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<=(Fixed const &rhs) const {
	if (this->toFloat() <= rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator==(Fixed const &rhs) const {
	if (this->toFloat() == rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const &rhs) const {
	if (this->toFloat() != rhs.toFloat())
		return (true);
	return (false);
}

Fixed Fixed::operator+(Fixed const &rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed &Fixed::operator++(void) {
	this->_nbr++;
	return *this;
}

Fixed Fixed::operator++(int rhs) {
	(void)rhs;
	Fixed copy(*this);

	++(*this);
	return copy;
}

Fixed &Fixed::operator--(void) {
	this->_nbr--;
	return *this;
}

Fixed Fixed::operator--(int rhs) {
	(void)rhs;
	Fixed copy(*this);

	--(*this);
	return copy;
}

Fixed const &Fixed::min(Fixed const &i1, Fixed const &i2) {
	if (i1.toFloat() < i2.toFloat())
		return (i1);
	return (i2);
}

Fixed &Fixed::min(Fixed &i1, Fixed &i2) {
	if (i1 < i2)
		return (i1);
	return (i2);
}

Fixed const &Fixed::max(Fixed const &i1, Fixed const &i2) {
	if (i1.toFloat() > i2.toFloat())
		return (i1);
	return (i2);
}

Fixed &Fixed::max(Fixed &i1, Fixed &i2) {
	if (i1  > i2)
		return (i1);
	return (i2);
}

int const Fixed::_fraction = 8;
