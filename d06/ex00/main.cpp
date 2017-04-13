#include <ctype.h>
#include <iostream>
#include <math.h>

void	particularBehavior(std::string str) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;
}

void	displayChar(char c) {
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	if (fmod(static_cast<double>(c), 1) == 0) {
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	} else {
		std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << std::endl;
	}
}

void	displayInt(char *str) {
	int nb = atoi(str);

	if (isprint(nb)) {
		std::cout << "char: " << static_cast<char>(nb) << std::endl;
	} else {
		std::cout << "char: Non displayable" << std::endl;
	}
	std::cout << "int: " << nb << std::endl;
	if (fmod(static_cast<double>(nb), 1) == 0) {
		std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(nb) << ".0" << std::endl;
	} else {
		std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(nb) << std::endl;
	}
}

void	displayDouble(char *str) {
	double d = atof(str);

	if (isprint(static_cast<int>(d))) {
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	} else {
		std::cout << "char: Non displayable" << std::endl;
	}
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (fmod(d, 1) == 0) {
		std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	} else {
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}

void	displayFloat(char *str) {
	double f = static_cast<float>(atol(str));

	if (isprint(static_cast<int>(f))) {
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	} else {
		std::cout << "char: Non displayable" << std::endl;
	}
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (fmod(static_cast<double>(f), 1) == 0) {
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << static_cast<float>(f) << ".0" << std::endl;
	} else {
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<float>(f) << std::endl;
	}
}

bool	is_char(char *str) {
	if (strlen(str) == 1) {
		return true;
	}
	return false;
}

bool	is_int(char *str) {
	for (int i = 0; i < str[i]; i++) {
		if (!isdigit(str[i])) {
			return false;
		}
	}
	return true;
}

bool	is_double(char *str) {
	bool	point = false;

	for (int i = 0; str[i]; i++) {
		if (!isdigit(str[i]) && str[i] != '.') {
			return false;
		} else if (str[i] == '.' && point == true) {
			return false;
		} else if (str[i] == '.') {
			point = true;
		}
	}
	return true;
}

bool	is_float(char *str) {
	int		len;

	if ((len = strlen(str)) > 1 && str[len - 1] == 'f') {
		str[len - 1] = 0;
		return is_double(str);
	}
	return false;
}

void	type(char *str) {
	std::string s(str);

	if (is_int(str)) {
		displayInt(str);
	} else if (is_double(str)) {
		std::cout << "isDouble" << std::endl;
		displayDouble(str);
	} else if (is_float(str)) {
		displayFloat(str);
	} else if (is_char(str)) {
		displayChar(*str);
	} else if (s == "-inff" || s == "+inff" || s == "nanf") {
		particularBehavior(s.substr(0,s.size() - 1));
	} else if (s == "-inf" || s == "+inf" || s == "nan") {
		particularBehavior(s);
	} else {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}

int		main(int ac, char **av) {
	if (ac == 2) {
		type(av[1]);
	} else {
		std::cout << std::endl;
	}
	return (0);
}
