#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all numbers inputted to 98
 * @n: starting number
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i", n);
		n++;
	}
	printf("98");
	putchar('\n');
}
