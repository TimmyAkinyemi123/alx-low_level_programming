#include "main.h"
/**
 * mul - multiply two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b, or 0 if either input is 0
 */
int mul(int a, int b)
{
	int product;
	int sign;

	if (a == 0 || b == 0)
		return (0);

	product = 0;
	sign = ((a < 0) ^ (b < 0)) ? -1 : 1;

	a = (a < 0) ? -a : a;
	b = (b < 0) ? -b : b;

	while (b--)
		product += a;

	return (sign * product);
}
