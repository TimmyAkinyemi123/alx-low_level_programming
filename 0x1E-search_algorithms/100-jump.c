#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0, current, i;

	if (array == NULL || size == 0)
		return (-1);

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		current = (prev + step) < size ? (prev + step) : (size - 1);
		if (array[current] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev, current);
			break;
		}
		prev += step;
	}
	for (i = prev; i <= (prev + step) && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
