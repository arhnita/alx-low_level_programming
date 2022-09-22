#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: imput value
 * @src: input value
 * Return: return value of dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		[dest_len++] = src[index];

	return (dest);
}
