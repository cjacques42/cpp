#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class Fixed {

public:

	Fixed(void);
	Fixed(int const nb);
	Fixed(float const f);
	Fixed(Fixed const &src);
	~Fixed(void);
	Fixed &operator=(Fixed const & rhs);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int _nbr;
	static int const _fraction;

};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif
