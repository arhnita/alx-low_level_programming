#include "main.h"
/**
 * puts2 - function that prints only one character out of 2
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
