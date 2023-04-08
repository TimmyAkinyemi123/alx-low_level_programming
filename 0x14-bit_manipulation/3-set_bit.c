#include "main.h"
/**
 * set_bit - set value of a bit to 1 at a given index
 * @n: integer to convert to bit
 * @index: index starting from 0 of the bit to set
 *
 * Return: ALways Success 1 or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
