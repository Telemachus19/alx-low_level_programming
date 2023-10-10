#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times (10 lines)
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;
	char alpha = 'a';

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
			_putchar(alpha + j);
		_putchar('\n');
	}
}
