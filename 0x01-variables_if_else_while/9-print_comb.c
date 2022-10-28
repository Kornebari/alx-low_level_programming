#include <stdio.h>

/**
 * main - Prints all combination of single digit
 * Return: Return 0 when successful
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
		if  (n != 9)
		{
			putchar(',');
			putchar(' ');;
		}
		putchar('\n');
		return (0);
	}
}
