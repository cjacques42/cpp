#include "Pony.hpp"
#include <iostream>

void		ponyOnTheHeap(void)
{
	Pony	*heap = new Pony("Heap");
	delete heap;
}

void		ponyOnTheStack(void)
{
	Pony	stack = Pony("Stack");
}

int			main()
{
	std::cout << " - start - " << std::endl;
	ponyOnTheHeap();
	ponyOnTheStack();
	std::cout << " - end - " << std::endl;
	return (0);
}
