#include "Array.hpp"

template<typename T>
Array<T>::Array(void) {
	this->_array = new T[0];
	this->_len = 0;
}

template<typename T>
Array<T>::Array(T const &src) {
	*this = src;
}

template<typename T>
Array<T>::Array(unsigned int len) {
	this->_array = new T[len];
	this->_len = len;
}

template<typename T>
Array<T> &Array<T>::operator=(T const &src) {
	if (this->_array)
		delete [] this->_array;
	this->_len = src._len;
	this->_array = new T[this->_len];
	for (unsigned int index = 0; index < this->_len; index++) {
		this->_array[index] = src._array[index];
	}
	return *this;
}

template<typename T>
T &Array<T>::operator[](unsigned int index) {
	if (index >= this->_len)
		throw std::exception();
	return this->_array[index];
}

template<typename T>
unsigned int Array<T>::size(void) const {
	return this->_len;
}

template<typename T>
Array<T>::~Array(void) {
	delete [] this->_array;
}
