#include "lists.h"
/**
 * listint_len - number of elements in linked list
 * @h: pointer to the first node
 * Return: num_element
 */
size_t listint_len(const listint_t *h)
{
	size_t num_element = 0;

	while (h != NULL)
	{
		num_element++;
		h = h->next;
	}
	return (num_element);
}
