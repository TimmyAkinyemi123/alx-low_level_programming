#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin_int = 0;
	int i;

	if (!b)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		bin_int = 2 * bin_int + (b[i] - '0');
		i++;
	}
	return (bin_int);
}
