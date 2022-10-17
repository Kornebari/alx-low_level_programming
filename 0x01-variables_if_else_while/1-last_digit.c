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
	int num;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num - n % 10;
	if (num > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n");
	}
			else if (num == 0)
			{
				printf("The last digit of %d is %d snd is 0\n");
			}
	else if ((num < 6) && (num < 0)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n");
	}
	return (0);

