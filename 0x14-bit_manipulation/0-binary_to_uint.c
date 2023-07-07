#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin_int = 0;
	int i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		bin_int = 2 * bin_int + (b[i] - '0');
		i++;
	}
	return (bin_int);
}
