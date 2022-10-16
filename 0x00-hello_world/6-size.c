#include <stdio.h>
/**
 *
 * main - print the sizes of types in c
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char a;
	int i;
	long int c;
	long long int b;
	float f;

	printf("Size of char: %lu bytes\n", sizeof(a));
	printf("Size of an int: %lu bytes\n", sizeof(i));
	printf("Size of a long int: %lu bytes\n", sizeof(c));
	printf("Size of a long long int: %lu bytes\n", sizeof(b));
	printf("Size of a float: %lu bytes\n", sizeof(f));
	return (0);
}
