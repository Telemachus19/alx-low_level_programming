#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 * @n: the number
 *
 * Return: the last digit in the number.
 */
int print_last_digit(int n)
{
	int r = (n < 0) ? (-n % 10) : (n % 10);

	_putchar('0' + r);
	return (r);
}
