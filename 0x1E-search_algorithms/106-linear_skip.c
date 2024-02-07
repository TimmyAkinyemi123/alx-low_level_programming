#include "search_algos.h"

/**
 * linear_skip - Searches for an algorithm in a sorted singly
 * linked list of integers using linear skip.
 * @list: A pointer to the  head of the linked list to search.
 * @value: The value to search for.
 * Return: If the value is not present or the head of the list is NULL, NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *j;

	if (!list)
		return (NULL);

	for (node = j = list; j->next != NULL && j->n < value;)
	{
		node = j;
		if (j->express != NULL)
		{
			j = j->express;
			printf("Value checked at index [%ld] = [%d]\n",
					j->index, j->n);
		}
		else
		{
			while (j->next != NULL)
				j = j->next;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, j->index);
	for (; node->index < j->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	return (node->n == value ? node : NULL);
}
