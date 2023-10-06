#include <stdio.h>

/**
 * main - print all number from 0 to 9 using putchar only
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 48, MAX = (i + 10);

	for (; i < MAX; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
