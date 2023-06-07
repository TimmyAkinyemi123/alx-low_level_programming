#include "main.h"
/**
 * _sqrt_recursion - find squareroot of a number
 * @n: number
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - helps find root
 * @n: number
 * @i: root
 * Return: squareroot
 */
int _sqrt(int n, int i)
{
	int root = i * i;

	if (root > n)
		return (-1);
	if (root == n)
		return (i);
	return (_sqrt(n, i + 1));
}
