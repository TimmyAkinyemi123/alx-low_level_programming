#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list
 * @h: the pointer of pointer h
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int i;
	listint_t *ptr;

	while (*h != NULL)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
