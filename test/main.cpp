#include <iostream>
#include "../crayons.hpp"

int main() 
{
	Crayon red(FG_RED);
    Crayon def(FG_DEFAULT);
	std::cout << "This " << red << "word" << def << " is red." << std::endl;
	return 0;
}