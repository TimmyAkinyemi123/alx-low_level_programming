#include "lists.h"
#include <stddef.h>
/**
 * list_len -returns the no of elements in a linked list
 * @h: pointer to the head of the linked list
 * Return: the number
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
