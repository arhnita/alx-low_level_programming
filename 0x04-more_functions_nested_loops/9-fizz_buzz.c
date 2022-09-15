#include <stdio.h>
/**
 * main- prints the numbers from 1 - 100
 * Fizz- for multiples of three
 * Buzz - for multiples of five
 * FizzBuzz - for multiples of three and five
 * Return: no return value
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("Buzz");
		}
		if (num == 100)
			continue;
		printf(" ");
	}
}
