#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, num = 0;
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
