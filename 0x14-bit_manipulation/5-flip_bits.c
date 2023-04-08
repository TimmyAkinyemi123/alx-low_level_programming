#include "main.h"
/**
 * flip_bits - flip bits to get from one number to another.
 * @n: first integer
 * @m: other integer
 *
 * Return: the no of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63;
	int num = 0;
	unsigned long int current;
	unsigned long int xor = n ^ m;

	while (i >= 0)
	{
		current = xor >> i;
		if (current & 1)
			num++;
		i--;
	}
	return (num);
}
