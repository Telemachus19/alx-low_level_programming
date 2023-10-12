#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line. But for 
 * multiples of three print "Fizz" instead of the number and for the multiples
 * of five print "Buzz". for numbers which are mutltiples of both there
 * and five print "FizzBuzz"
 * Return: 0
 */

int main(void)
{
	int i, multThree, multFive;

	for (i = 1; i < 101; i++)
	{
		multThree = i % 3;
		multFive = i % 5;
		if (!(multThree) && !(multFive))
			printf("FizzBuzz ");
		else if (!(multThree))
			printf("Fizz ");
		else if (!(multFive))
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
