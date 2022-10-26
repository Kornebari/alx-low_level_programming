#include "main.h"

/**
 * print_line - Prints a straight line with '-'
 * @n: The number of '-' to be printed
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('-');
	}
	_putchar(''\n');
}

