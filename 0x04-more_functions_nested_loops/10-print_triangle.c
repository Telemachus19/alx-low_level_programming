#include "main.h"

/**
 * print_triangle - prints a triangle :-)
 * @size: obvious :-) the size of the triangle.
 * Return: void
 */

void print_triangle(int size)
{
	int i, space, tri;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (space = size - i - 1; space > 0; space--)
			_putchar(' ');
		for (tri = 0; tri <= i; tri++)
			_putchar('#');
		_putchar('\n');
	}
}
