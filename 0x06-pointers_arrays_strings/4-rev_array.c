#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 * @a: Array of integers
 * @n: Number of elements of the array
 * Return: Reverse
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for  (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

