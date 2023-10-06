#include <stdio.h>

/**
 * main - prints the alphabet in lower case excpet q and e
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alpha = 97;
	int i;

	for (i = alpha; i < (alpha + 26); i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
