#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * Return: Always 0
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++; al != 'e' && al != 'q')
		putchar(al);
	}
	putchar('\n');
	return (0);
}
