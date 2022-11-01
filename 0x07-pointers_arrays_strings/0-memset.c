#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: The starting address
 * @b: The desired value
 * @n: The number of bytes to be changed
 * Return: The memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		return (s);
	}
}
