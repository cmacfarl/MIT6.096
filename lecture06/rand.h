
#ifndef __RAND_H__
#define __RAND_H__

class Rand {
public:
	Rand(int range);
	~Rand();

	/*
	 * Returns a number between 0 and range - 1
	 */
	int get();

private:
	int range;
};

#endif
