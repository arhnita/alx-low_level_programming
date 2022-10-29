#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * pop_listint - function deleted the head node
 * @head: double pointer to list
 * Return: head node, 0 if empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp = *head;

	if (temp == NULL)
		return (data);

	data = temp->n;
	*head = (*head)->next;

	free(temp);
	return (data);
}
