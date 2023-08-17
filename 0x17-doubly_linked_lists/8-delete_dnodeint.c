#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from at a given index.
 * @head: pointer to pointer of head node.
 * @index: The index of the node to delete.
 *
 * Return: Alway Success 1. otherwise -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (!(*head))
		return (-1);
	while (index != 0)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
		index--;
	}
	if (temp == *head)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
