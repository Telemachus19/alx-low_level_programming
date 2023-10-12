#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 * Return: void
 */

void print_square(int size)
{
	int rows, cols;
	for (rows = 0; rows < size; rows++)
	{
		for (cols = 0; cols < size; cols++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
