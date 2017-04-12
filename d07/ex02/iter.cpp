#include <iostream>

void	printChar(char val) {
	std::cout << val << std::endl;
}

void	printInt(int val) {
	std::cout << val << std::endl;
}

template<typename T, typename N, typename F>
void	iter(T *array, N len, F function) {
	for (N i = 0; i < len; i++) {
		function(array[i]);
	}
}

int		main() {
	char	tab1[] = {'a', 'b', 'c', 'd', 'e'};
	char	tab2[] = {1, 2, 3, 4, 5, 6, 7};

	iter(tab1, 5, &printChar);
	iter(tab2, 7, &printInt);

	return (0);
}
