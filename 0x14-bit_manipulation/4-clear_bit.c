#include "main.h"
/**
 * clear_bit - sets value of bit to 0 at a given index
 * @index: index starting from 0 of the bit you want to set
 * @n: integer to manipulate
 *
 * Return: Always Success 1 or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
