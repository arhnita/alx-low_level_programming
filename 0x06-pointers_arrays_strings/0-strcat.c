#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: imput value
 * @src: input value
 * Return: return value of dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	return (dest);
}
