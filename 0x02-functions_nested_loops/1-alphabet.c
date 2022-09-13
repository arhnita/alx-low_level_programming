#include "main.h"
/**
 * main - entry point
 * Description - print in lowercase
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter < 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');

	return (0);
}
