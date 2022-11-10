#include "CommandPrompt.h"

#include <iostream>

int main()
{
	std::cout << MOONG::CommandPrompt::Execute("ipconfig") << std::endl;

	return 0;
}