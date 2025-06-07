#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brainptr = &brain;
	std::string &brainref = brain;

	std::cout << "Memory address of the string variable: " << &brain << std::endl;
	std::cout << "Memory address held by stringPTR: " << brainptr << std::endl;
	std::cout << "Memory address held by stringREF: " << &brainref << std::endl;

	std::cout << "Value of the string variable: " << brain << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *brainptr << std::endl;
	std::cout << "Value pointed to by stringREF: " << brainref << std::endl;
	
	return 0;
}
