#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @c: the number to print
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int n;

	if (c < 0)
	{
		c = -c;
	}

	n = c % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');

	return (n);
}
