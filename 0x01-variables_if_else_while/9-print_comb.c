#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 48, max = (i + 10);
	for(; i < max; i++)
	{
		putchar(i);
		if (i != (max - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
