#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the head node
 * @index: index of node to be deleted
 * Return: 1 on Success, or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL;
	listint_t *previous = *head;
	unsigned int i = 0;

	if (head == NULL)
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
