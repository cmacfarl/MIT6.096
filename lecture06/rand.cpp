
#include "rand.h"
#include <stdlib.h>
#include <time.h>

static void seed()
{
	static int done = 0;

	if (!done) {
		srand(time(NULL));
	}
	done = 1;
}

Rand::Rand(int r) : range(r)
{
	seed();
}

Rand::~Rand()
{
}

int Rand::get()
{
	return (rand() % range);
}

