#include "lib.h"

#include <iostream>

int main(int, char **) {
	std::cout << "try 1" << std::endl;
	std::cout << "Version: " << version() << std::endl;
	std::cout << "Hello, world!" << std::endl;
	return 0;
}
