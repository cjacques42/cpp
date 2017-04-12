#include <iostream>

template<typename T>
void	swap(T *v1, T *v2) {
	T	tmp;
	tmp = *v1;
	*v1 = *v2;
	*v2 = tmp;
}

template<typename T>
T	min(T v1, T v2) {
	if (v1 < v2)
		return v1;
	return v2;
}

template<typename T>
T	max(T v1, T v2) {
	if (v1 > v2)
		return v1;
	return v2;
}

int		main() {
	bool	a = true;
	bool	b = false;

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "min : " << min<bool>(a, b) << std::endl;
	std::cout << "max : " << max<bool>(a, b) << std::endl;
	swap<bool>(&a, &b);
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl << std::endl;

	char	c = 'c';
	char	d = 'd';
	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "min : " << min<char>(c, d) << std::endl;
	std::cout << "max : " << max<char>(c, d) << std::endl;
	swap<char>(&c, &d);
	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	return (0);
}
