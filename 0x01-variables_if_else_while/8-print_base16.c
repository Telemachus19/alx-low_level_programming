#include <stdio.h>

/**
 * main - print hexadecimal numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char base_10 = '0', base_16 = 'a';

	for (; base_10 <= '9'; base_10++)
		putchar(base_10);
	for (; base_16 <= 'f'; base_16++)
		putchar(base_16);
	putchar('\n');
	return (0);
}
