#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @str: The string to get the length of
 * Return: the length of the string
 */
int _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	{
		length++;
	}

	return (length);
}
