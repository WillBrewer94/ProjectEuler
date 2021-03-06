// Euler_LargestPrime.cpp - By Will Brewer
// Largest Prime Number - Project Euler #3
//
// Find the largest prime factor of 600851475143.

#include "Euler_LargestPrime.h"
#include <iostream>

int main()
{
	std::cout << largest_prime(600851475143);

	return 0;
}

unsigned long long largest_prime(unsigned long long lim)
{
	unsigned long long n = lim;
	unsigned long long largest = 0;

	while (n % 2 == 0)
	{
		//Bit shift, identical to n /= 2
		n >>= 1;
	}

	for (int i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}

	if (n > 2)
	{
		if (n > largest) largest = n;
	}

	return largest;
}
