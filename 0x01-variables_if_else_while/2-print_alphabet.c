#include <stdio.h>

/**
 * main - prints the alphabet using only `putchar`
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char alpha = 97;

	for (int i = alpha; i < (alpha + 26); i++)
		putchar(i);
	putchar('\n');
	return (0);
}
