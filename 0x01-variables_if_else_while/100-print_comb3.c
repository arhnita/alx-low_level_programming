#include <stdio.h>
/**
 * main - Entry point
 * description: task 10
 * Return: 0 always
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i ! = 56 || j ! = 57)
			{

				putchar(',');
				putchar(' ');
			}
		}	
	}
	putchar('\n');

	return (0);
}
