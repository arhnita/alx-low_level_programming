#include "main.h"
/**
 * print_most_numbers - prints num 0-9 except 2 & 4
 * Return: no return value
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if ((num == 2) || (num == 4))
		{
			continue;
		}
		else
		{
			_putchar(num + '0');
		}
	}
	_putchar('\n');
}
