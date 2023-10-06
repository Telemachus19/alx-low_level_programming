#include <stdio.h>

/**
 * main - prints lowercase alphabet followed by uppercase alphabet
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int alpha = 97;

	while (1)
	{
		putchar(alpha++);
		if (alpha == 123)
			alpha = 65;
		if (alpha == 91)
			break;
	}
	putchar('\n');
	return (0);
}
