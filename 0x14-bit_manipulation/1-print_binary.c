#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert and print
 */
void print_binary(unsigned long int n)
{
	int index, num = 0;
	unsigned long int current;

	for (index = 63; index >= 0; index--)
	{
		current = n >> index;
		if (current & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
