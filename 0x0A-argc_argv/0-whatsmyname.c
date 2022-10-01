#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - prints the name of the program
 * @argc: number of command line argument
 * @argv: array name
 * Return: 0
 */
int main(int argc, char **argv)
{
	UNUSED(argc);
	printf("%s\n", argv[0]);

	return (0);
}
