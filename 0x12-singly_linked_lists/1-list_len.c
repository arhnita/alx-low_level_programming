#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - returns number of elements
 * @h: pointer to the list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}

	for (; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
