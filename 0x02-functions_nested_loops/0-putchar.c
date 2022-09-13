#include "main.h"
/**
 * Main - Entry point
 * Description: program that prints _putchar followed by a new line
 * Return: 0 always
 */
int main(void)
{
	char *p = "\_putchar";

	while(*p)
	{
	 _putchar(*p);
	 p++;
	}

	_putchar("\n");

	return (0);
}
