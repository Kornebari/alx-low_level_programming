#include "main.h"

/**
 * _isupper - Checks upper case letters
 * @c: Charcter to check
 * Return: 1 if character is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
