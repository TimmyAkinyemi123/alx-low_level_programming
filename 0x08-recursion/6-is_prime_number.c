#include "main.h"
/**
 * is_prime_number - checks if integer is a prime number
 * @n: integer
 * Return: 1 if succesful or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (!is_divisible(n, n - 1));
}
/**
 * is_divisible - checks for divisbility of integer
 * @n: number
 * @i: dividing factor
 * Return: 1 is successful
 */
int is_divisible(int n, int i)
{
	if (i == 1)
		return (0);
	if (n % i == 0)
		return (1);
	return (is_divisible(n, i - 1));
}
