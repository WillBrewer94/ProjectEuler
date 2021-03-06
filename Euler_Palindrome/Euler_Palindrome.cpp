// Euler_Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Euler_Palindrome.h"
#include <iostream>

int main()
{
	int largest = 0;

	for (int i = 999; i > 0; i--)
	{
		for (int j = 999; j > 0; j--)
		{
			int result = i * j;
			if (is_palindrome(std::to_string(result)) && result > largest)
			{
				largest = result;
			}
		}
	}

	std::cout << "The largest three-digit product palindrome is : " << largest << "\n";
}

bool is_palindrome(std::string str) 
{
	int len = str.length();
	int i = 0;

	while (i <= len / 2)
	{
		if (str.at(i) != str.at((len - 1) - i))
		{
			return false;
		}

		i++;
	}

	//reached end of while loop, must be palindrome
	return true;
}