
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
	int largest;

	/*
	 * Use a for loop to iterate 5 times asking for a number.
	 * Use an if statement to keep track of the largest number
	 */

	std::cout << "The largest number is " << largest << "\n";

	return 0;
}

