#include "main.h"

/**
 * positive_or_negative - Checks if the random number n is positive or negative
 * Return: always 0 (Success)
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}

