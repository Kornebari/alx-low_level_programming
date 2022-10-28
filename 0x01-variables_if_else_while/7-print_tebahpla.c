#include <stdio.h>

/**
 * main - Prints lowercase alphabets in reverse order
 * Return: 0 upon success
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
