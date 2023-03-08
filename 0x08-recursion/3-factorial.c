#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: given number
 * Return: -1, 1, n * factorial(n-1)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
