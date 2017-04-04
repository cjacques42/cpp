#include <iostream>

int		main(void) {
	std::string		str = "HI THIS IS BRAIN";
	std::string		&ref = str;
	std::string		*ptr;

	ptr = &str;
	std::cout << "Reference: " << *ptr << std::endl;
	std::cout << "Pointer: " << ref << std::endl;
	return (0);
}
