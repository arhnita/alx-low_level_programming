#include <stdio.h>
/**
 * main - Entry point
 * description: prints in reverse
 * Return: 0 always
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
