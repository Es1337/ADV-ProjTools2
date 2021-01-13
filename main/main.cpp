#pragma once
#include "../src/header.h"

int main(int argc, char **argv)
{
	Sample sDef;
	Sample sAdv{"LMAO"};

	sDef.displayDoge();
	std::cout << sDef.getLabel() << '\n';
	std::cout << sAdv.getLabel() << '\n';

	return 0;
}