#include "main.h"

/**
 * _isdigit - checks if the character is a digit
 * @c: character to be checked.
 * Return: 1 if the character is a digit else 0
 */

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
