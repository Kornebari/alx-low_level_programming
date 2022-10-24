#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n element of an array of integer
 * @a: Array
 * @n: Number of values to be printed
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}
