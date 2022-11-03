#include "main.h"

/**
 * check - checks for square root
 * @a: integer
 * @b: nteger
 * Return: integer
 */
int chack(int a, int b)
{
	 if (a * a == b)
		 return (a);
	 if (a * a > b)
		 return (-1);
	 return (check(a + 1, b));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n:the integer
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n);
			}
