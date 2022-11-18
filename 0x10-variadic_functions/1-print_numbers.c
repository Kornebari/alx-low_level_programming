#include "variadic_functions.h"
/**
 * print_numbers - prints numbers and then a new line
 * @n: number of parameters
 * @seperator: seperator between the numbers
 * Return: always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	va_sart(ap, n);

	if (seperator == NULL)
		seperator = "";
	for (i = 0; i <n; i++)
	{
		printf("%d", va_arg(ap, int);
				if (i < n - 1)
				printf("%s", seperator);
				}
				printf("\n");
				va_end(ap);
				}
