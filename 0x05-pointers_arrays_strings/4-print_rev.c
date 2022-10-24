#include "main.h"

/**
 * print_rev - Prints string in reverse order
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchhar(s[i]);
	_putchar('\n');
}
