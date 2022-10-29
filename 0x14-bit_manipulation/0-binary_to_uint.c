#include "main.h"
/**
 * binary_to_uint - convers a binary to unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: if b is null or contains not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}
	return (dec_val);
}
