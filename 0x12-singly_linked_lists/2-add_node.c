#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - fxn that adds a new node
 * @head: double pointer to the list
 * @str: string to be added
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int n = 0;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	while (str[i++])
		n++;

	new->str = strdup(str);
	new->len = n;
	new->next = *head;
	*head = new;

	return (new);
}
