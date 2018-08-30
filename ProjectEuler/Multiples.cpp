// Multiples.cpp - By Will Brewer
// Multiples of 3 and 5 - Project Euler #1
//
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.
#include <iostream>
#include "Multiples.h"

int main(int argc, char* argv)
{
	std::cout << find_multiples(1000);
	return 0;
}

int find_multiples(int limit)
{
	int sum = 0;
	int cur = 0;

	while ((cur += 3) < limit)
	{
		sum += cur;
	}

	cur = 0;

	while ((cur += 5) < limit)
	{
		if (cur % 3 != 0)
		{
			sum += cur;
		}
	}

	return sum;
}