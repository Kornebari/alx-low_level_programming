#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to fill
 * @b: constatnt byte to fill
 * @n: bytes of memory area to fill
 * Return: the memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
