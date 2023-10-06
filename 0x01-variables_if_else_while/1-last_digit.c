#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - gets the last digit of a random number and compares it to 5, 0, and 6
 * Return: always 0 (Success)
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit > 5)
		printf("and is greather than 5\n");
	else if (last_digit == 0)
		printf(" and is 0\n");
	else if (last_digit < 6)
		printf("and is less than 6 and not 0\n");
	return (0);
}

