#include "main.h"
/**
 * swap_int - swap value of *a to *b, and *b to *a
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
