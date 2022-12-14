#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function
 * given as parameter on each element of an array
 * @action: is a pointer to the function to be used
 * @array: the array
 * @size: size of the array
 * Return: voi
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k;

	if (array && action)
	{
		k = 0;
		while (k < size)
		{
			action(array[k]);
			k++;
		}
	}
}
