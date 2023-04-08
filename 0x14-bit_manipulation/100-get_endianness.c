#include "main.h"

/**
 * get_endiannes - Checks the endianess
 *
 * Return: If big-endian - 0.
 * If little-endian - 1.
 */

int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
