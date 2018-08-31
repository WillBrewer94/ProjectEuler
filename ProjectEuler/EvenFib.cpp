// EvenFib.cpp - By Will Brewer
// Sum of Even Fibonacci Sequence - Project Euler #2
//
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
// find the sum of the even-valued terms.
#include "EvenFib.h"
#include <iostream>

int main(int argc, char* argv)
{
	std::cout << fib_sum(4000000);
	return 0;
}

// Generates the sum of all even numbers in fibonacci sequence of lim
// Param: int
// Return: int
int fib_sum(int lim)
{
	int fib = 1;
	int lastFib = 1;
	int temp = 0;
	int sum = 0;

	if (lim < 2)
	{
		return lim;
	}

	while (fib < lim)
	{
		if (fib % 2 == 0)
		{
			sum += fib;
		}

		temp = fib;
		fib += lastFib;
		lastFib = temp;
	}

	return sum;
}