#include <stdio.h>
/**
 *
 * Main-Entry
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char a;
	int i;
	long int l;
	long long int b;
	float f;

	printf("Size of char: %lu bytes\n", sizeof(a));
	printf("Size of an int: %lu bytes\n", sizeof(i));
	printf("Size of a long int: %lu bytes\n", sizeof(l));
	printf("Size of a long long int: %lu bytes\n", sizeof(b));
	printf("Size of a float: %lu bytes\n", sizeof(f));
	return (0);
}
