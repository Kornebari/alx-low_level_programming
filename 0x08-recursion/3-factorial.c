#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: the number
 * Return:factorial
 */
int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (0);
	}
		else if (n < 0)
		{
			return (-1);
		}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
