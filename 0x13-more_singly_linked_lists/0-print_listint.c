#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_listint - prints all elements
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}

	return (count);
}
