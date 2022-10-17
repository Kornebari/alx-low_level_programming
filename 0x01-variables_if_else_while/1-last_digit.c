#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int n;
	int P;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;
	if (p > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n");
	}
			else if (p == 0)
			{
				printf("The last digit of %d is %d and is 0\n");
			}
	else if ((p < 6) && (p < 0))
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n");
	}
	return (0);


