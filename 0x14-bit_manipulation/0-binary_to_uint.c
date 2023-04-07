#include "main.h"

/**
 * binary to unit - converts number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_var = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_var = 2 * dec_var + (b[i] - '0');
	}
	return (dec_var);
}
