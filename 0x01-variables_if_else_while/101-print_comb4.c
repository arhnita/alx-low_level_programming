#include <stdio.h>
/**
 * main - Entry point
 * Description: task 11
 * Return: 0 always
 */
int main(void)
{
	int i, c, e;

	for (i = '0'; i <= '9'; i++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			for (e = '0'; e <= '9'; e++)
			{
				if (i < c && c < e)
				{
					putchar(i);
					putchar(c);
					putchar(e);
					if (i != '7' || (c != '8' && e == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

