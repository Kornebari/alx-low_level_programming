#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: The first natural number
 */

void print_to_98(int n)
{
if (n >= 98)
{
while (n >= 98)
printf("%d, ", n--);
printf("\n");
}
else
{
	while (n < 98)
		printf("%d, ", n++);
	printf("\n");
}
	else if (n == 98)
{
	printf("%d");
	printf("\n");
}
}
}

