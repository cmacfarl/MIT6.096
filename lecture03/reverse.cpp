
#include <iostream>
#include "string.h"

void printReverse(char *str, int len)
{
}

int main(int argc, char *argv[])
{
	int len;
	char *str;

	if (argc <= 1) {
		std::cout << "You must supply me a word.\n";
		return 0;
	}

	str = argv[1];
	len = strlen(argv[1]);
	
	printReverse(argv[1], len);

	return 0;
}

