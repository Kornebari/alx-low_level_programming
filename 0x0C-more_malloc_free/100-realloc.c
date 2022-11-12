#include "main.h"
/**
 * _realloc - reallocates memory using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: is the size in bytes, of the space for ptr
 * @new_size:new size in block of the new memory
 *
 * Return: pointer to allocated new size memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
		if (new_size > old_size)
			n = old_size;
		for (i = 0; i < n; i++)
			p[i] = oldp[i];
				free(ptr);
				return (0);
	}
}
