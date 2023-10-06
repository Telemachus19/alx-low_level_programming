#include <stdio.h>

/**
 * main - print lowercase letter from z to a
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alpha = 'z';

	for (; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
