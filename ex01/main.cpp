#include <iostream>
#include <string>

int		main(void)
{
	int				i = 0;
	std::string		buf;

	while (true)
	{
		std::cout << ">$";
		std::getline(std::cin, buf);
		if (buf == "ADD")
		{
			if (i < 8)
			{
				std::cout << buf << std::endl;
				i++;
			}
			else
				std::cout << "Your contact list is full" << std::endl;
		}
		else if (buf == "SEARCH")
			std::cout << buf << std::endl;
		else if (buf == "EXIT")
			return (0);
	}
	return (0);
}
