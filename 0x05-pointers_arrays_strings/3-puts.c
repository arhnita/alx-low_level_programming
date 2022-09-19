#include "main.h"
/**
 * _puts - prints a string to standard output
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	while (str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
