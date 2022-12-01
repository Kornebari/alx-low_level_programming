#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - prints all the elements of a list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
