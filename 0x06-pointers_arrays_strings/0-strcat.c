#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destination string to be concatenated upon
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (*(dest + j) != '\0')
		j++;
	for (i = 0; *(src + 1) != '\0'; i++;)
	{
		*(dest + j) = *(src + i);
		j++;
	}
	*(dest + j) = '\0';

	return (dest);
}
