#include <stdio.h>
/**
 * main - prints all argument it receives
 * @argc: the argument count
 * @argv: the argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
