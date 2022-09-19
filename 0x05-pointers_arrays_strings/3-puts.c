#include "main.h"
/**
 * _puts - prints a string to standard output
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + 1))
	{
		_putchar(*(str + 1));
		i++;
	}
	_putchar('\n');
}
