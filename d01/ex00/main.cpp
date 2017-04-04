#include "Pony.hpp"
#include <iostream>

void		ponyOnTheHeap(void)
{
	Pony	*heap = new Pony("Heap", "black");
	heap->drink();
	delete heap;
}

void		ponyOnTheStack(void)
{
	Pony	stack = Pony("Stack", "white");
	stack.drink();
}

int			main()
{
	std::cout << " - start - " << std::endl;
	ponyOnTheHeap();
	ponyOnTheStack();
	std::cout << " - end - " << std::endl;
	return (0);
}
