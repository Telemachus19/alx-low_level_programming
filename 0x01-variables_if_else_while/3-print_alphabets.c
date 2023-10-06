#include <stdio.h>

/**
 * main - prints lowercase alphabet followed by uppercase alphabet
 *
 * Returns: always 0 (Success)
 */

int main(void)
{
	int alpha = 97, finished =0;

	while(!finished)
	{
		putchar(alpha++);
		if (alpha == 123) 
			alpha = 65;
		if (alpha == 91)
			break;
	}
	putchar('\n');
}
