#include <stdio.h>
/**
 * main - Entry point
 * description: task 10
 * Return: 0 always
 */
int main(void)
{
	int digit1, digit2;

	for (digit2 = 0; digit1 < 10; digit2++)
	{
		putchar((digit1 % 10) + '0');
		putchar((digit2 % 10) + '0');

		if (digit1 == 9 && digit2 == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
