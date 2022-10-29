#include "main.h"
/**
 * binary_to_uint - convers a binary to unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: if b is null or contains not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

	if (*b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
