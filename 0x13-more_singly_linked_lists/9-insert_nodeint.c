#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at given position
 * @head: pointer to pointer head
 * @idx: index or position of node
 * @n: integer data of the new node
 *
 * Return: the address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *temp = *head;
	unsigned int i = 0;

	ptr = malloc(sizeof(listint_t));
	if (!ptr || !head)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	while (temp != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			return (ptr);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
