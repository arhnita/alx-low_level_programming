#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - function that returns sum of list
 * @head: pointer to list
 * Return: sum of data, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}

	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
