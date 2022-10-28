#include "main.h"

/**
 * print_line - Prints a straight line with '_'
 * @n: The number of '_' to be printed
 * return: void
 */
void print_line(int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

