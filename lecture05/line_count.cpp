
#include <iostream>
#include <fstream>

using namespace std;

int count_lines(char *filename, int &longest)
{
	ifstream f(filename);
	/*
	 * Declare variables to be used below
	 */

	/*
	 * Initialize variables
	 */

	if (!f.good()) {
		std::cout << "Filename " << filename << " does not exist\n";
		return -1;
	}

	cout << "\n";
	while (f.good()) {
		ch = f.get();
		/*
		 * Write logic here to do as described
	 	 */
	}
	cout << "\n";

	return lc;
}

int main(int argc, char* argv[])
{
	int lc;
	int longest;

	lc = 0;
	longest = 0;

	if (argc <= 1) {
		std::cout << "Please supply a filename";
	}

	lc = count_lines(argv[1], longest);

	if (lc != -1) {
		/*
		 * Write code to output results
		 */
	}
}
