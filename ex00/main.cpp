#include "Pony.hpp"

int main(void)
{
	std::cout << "----- ponyOnTheHeap -----" << std::endl;
	ponyOnTheHeap("Heap_Pony", "Red");
	std::cout << "----- ponyOnTheStack -----" << std::endl;
	ponyOnTheStack("Stack_Pony", "Blue");
}