#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: return value of dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (*(dest + j) != '\0')
		j++;
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + j) = *(src + i);
		j++;
	}
	*(dest + j) = '\0';
	return (dest);
}
