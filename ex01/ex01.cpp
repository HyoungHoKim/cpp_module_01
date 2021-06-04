#include <iostream>
#include <string>

void		memoryLeak()
{
	std::string*	panther = new std::string("String Panther");
	
	std::cout << *panther << std::endl;
	
	delete panther;
}
