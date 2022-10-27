#include <unistd.h>

/**
 * _putchar - Writes character c to stdout
 * @c: char to be printed
 * Return: 1 when successful
 */
int _putchar(char c)
{
	return (writ(1, &c, 1));
}
