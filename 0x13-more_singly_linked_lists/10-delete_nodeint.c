#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at given position
 * @head: pointer to the pointer head
 * @index: position of the node to delete
 * Return: Always success 1 or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL;
	listint_t *previous = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(previous);
		return (1);
	}
	while (i < index - 1)
	{
		if (!previous || !(previous->next))
			return (-1);
		previous = previous->next;
		i++;
	}
	current = previous->next;
	previous->next = current->next;
	free(current);

	return (1);
}
