#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: The string to get the length of
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
