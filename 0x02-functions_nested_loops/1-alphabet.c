#include "main.h"
/**
 * main - entry point
 *
 * Description - print alphabet in lower case
 * Return: always zero
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter < 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
