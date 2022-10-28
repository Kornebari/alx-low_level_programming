#include <stdio.h>

/**
 * main - Prints prints all the numbers of base 16
 * Return: Return 0 when successful
 */
int main(void)
{
	int a;
	char lc;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (lc = 'a'; lc <= 'f'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}

