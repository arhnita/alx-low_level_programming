#include "main.h"
/**
 * more_numbers - a function that prints 10 times a number
 * _putchar: only three times
 * Return: 0-14 x10 followed by new line
 */
void more_numbers(void)
{
	int i, mo;

	for (mo = 0; mo < 10; mo++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
