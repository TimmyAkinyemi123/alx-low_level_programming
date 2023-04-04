#include "lists.h"
/**
 * get_nodeint_at_index- return nth node of list listint_t
 * @head: pointer to listint_t
 * @index: index of the node starting at 0
 * Return: pointer to node temp or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i< index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
