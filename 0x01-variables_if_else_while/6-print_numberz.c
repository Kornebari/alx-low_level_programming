#include <stdio.h>

/**
 * main - Prints digits in base ten
 * Return: 0 upon success
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
