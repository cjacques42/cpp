#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array {

public:

	Array<T>(void);
	Array<T>(T const &);
	Array<T>(unsigned int);
	Array<T>&operator=(T const &);
	T &operator[](unsigned int);
	unsigned int size(void) const;
	~Array<T>(void);

private:

	T *_array;
	unsigned int _len;

};

#endif
