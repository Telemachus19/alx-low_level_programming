#include "main.h"

/**
 * print_lines - draws a straight line
 * @n: lenght of the stragiht line
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
