#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: max value
 * Return: ptr to the array
 */
int *array_range(int min, int max)
{
	int *ptr, i = 0, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (!ptr)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min++;
		i++;
	}
	return (ptr);
}
