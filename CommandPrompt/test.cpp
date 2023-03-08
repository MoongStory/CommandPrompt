#include "CommandPrompt.h"

#include <iostream>

int main()
{
	std::cout << MOONG::CommandPrompt::execute("ipconfig") << std::endl;

	return 0;
}