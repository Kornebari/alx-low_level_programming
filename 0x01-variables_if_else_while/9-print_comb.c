#include <stdio.h>

/**
 * main - Prints all combination of single digit
 * Return: Return 0 when successful
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if  (n != 57)
		{
			putchar(',');
			putchar(' ')
		}
		putchar('\n');
		return (0);
	}
}
