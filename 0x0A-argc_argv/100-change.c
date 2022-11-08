#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change
 * @argc: argument count
 * @argv: array pointer holding the agument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, coins_number =0;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			coins_number += 1;
		}
	}
	printf("%d\n", coins_number);
	return (0);
}
