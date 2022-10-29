#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint
 * @head: double pointer to list to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = *head;
		(*head) = &(*head)->next
			free(tmp);
	}
	*head = NULL;
}
