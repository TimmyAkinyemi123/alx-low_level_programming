#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements in the list
 * @h: pointer to the list
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		printf("Linked list is empty");
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
