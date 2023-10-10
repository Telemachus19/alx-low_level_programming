#include "main.h"
/**
 * print_alphabet - print all the letters
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alpha + i);
	}
	_putchar('\n');
}
