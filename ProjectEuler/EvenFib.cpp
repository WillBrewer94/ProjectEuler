#include "EvenFib.h"
#include <iostream>

int main(int argc, char* argv)
{
	std::cout << fib_sum(4000000);
	return 0;
}

int fib_sum(int lim)
{
	if (lim < 2)
	{
		return lim;
	}

	return fib_sum(lim - 1) + fib_sum(lim - 2);
}