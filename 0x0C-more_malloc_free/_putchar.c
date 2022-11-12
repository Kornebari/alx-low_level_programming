#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to be written
 *
 * Return: 1 on success and -1 when error is encountered
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
