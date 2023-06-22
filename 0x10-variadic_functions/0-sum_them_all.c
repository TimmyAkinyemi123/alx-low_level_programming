#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums up all its parameters
 * @n: fixed number of parameters
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
