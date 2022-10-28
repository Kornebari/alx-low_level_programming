#include <stdio.h>

/**
 * main - prints single digit numbers of base 10
 * Return:0 when successful
 */
int main(void)
{
	int t;

	for (t = '0'; t <= '9'; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
