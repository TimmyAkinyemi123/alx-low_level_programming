#include "main.h"

/**
 * check_divisibility - checks if n is divisible by i
 * @n: the number to check
 * @i: the divisor to check
 *
 * Return: 1 if n is divisible by i, otherwise 0
 */
int check_divisibility(int n, int i)
{
	if (i == 1)
		return (0);
	if (n % i == 0)
		return (1);
	return (check_divisibility(n, i - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (!check_divisibility(n, n - 1));
}
