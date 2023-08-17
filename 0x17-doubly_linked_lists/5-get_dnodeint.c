#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of linked list.
 * @head: pointer to the head node
 * @index: index of the node
 * Return: address of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		if (index == 0)
			return (temp);
		temp = temp->next;
		index--;
	}
	return (NULL);
}
