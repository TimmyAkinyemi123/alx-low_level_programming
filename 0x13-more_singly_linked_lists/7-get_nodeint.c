#include "lists.h"
/**
 * get_nodeint_at_index - finds nth node
 * @head: the list
 * @index: index of nth node
 * Return: nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	for (i = 0; i < index && temp != NULL; i++)
		temp = temp->next;
	return (temp ? temp : NULL);
}
