#include <iostream>
#include "Array.hpp"

int		main() {
	Array<int> tab = Array<int>(12);


	std::cout << tab.size() << std::endl;

	return (0);
}
