
#include <iostream>

int getNumber(void) 
{
	int num;

	std::cout << "Enter a number: ";
	std::cin >> num;
	std::cout << "\n";

	return num;
}

int main() 
{
	int num;

	num = getNumber();

	/*
	 * Students must fill in code here to output hello world 'num' times
	 */

	return 0;
}

