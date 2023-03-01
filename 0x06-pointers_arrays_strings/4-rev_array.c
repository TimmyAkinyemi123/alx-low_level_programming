#include "main.h"
/**
 * reverse_array - to reverse array a
 * @a: array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
