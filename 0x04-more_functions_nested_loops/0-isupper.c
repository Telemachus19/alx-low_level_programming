#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @c: character to be checked
 * Return: 1 if uppercase; else 0
 */

int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
