#include "main.h"

/**
 * _islower - checks if the character is lowercase
 * @c: character to be checked
 *
 * Return: 1 - if the @c is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
