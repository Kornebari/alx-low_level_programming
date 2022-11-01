#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: The starting address
 * @b: The desired value
 * @n: The number of bytes to be changed
 * Return: The changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (n > 0; i++;)
	{
		s[i] = b;
		n--;
		return (s);
	}
}
