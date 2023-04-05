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

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	ptr->next = temp->next;
	temp->next = ptr;

	return (ptr);
}
