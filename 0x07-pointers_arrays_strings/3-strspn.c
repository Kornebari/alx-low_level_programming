#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the initial segment
 * @accept: consits of bytes
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, x, y;

for (x = 0; s[x] != '\0'; x++)
{
if (s[x] != 32)
{
	for (y = 0; accept[y] != '\0'; y++)
	{
		if (s[x] == accept[y])
			a++;
	}
}
else
return (a);
}
return (a);
}
