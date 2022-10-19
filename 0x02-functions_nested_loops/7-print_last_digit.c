#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 * @t: The number whose last digit will be printed
 * Return: Value of las digit
 */

int print_last_digit(int t)
{
	int ld = t % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

		return (ld);;
}

