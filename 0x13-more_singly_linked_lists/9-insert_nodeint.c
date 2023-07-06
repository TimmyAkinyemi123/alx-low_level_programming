#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to the first node
 * @idx: index
 * @n: data
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *ptr = malloc(sizeof(listint_t));
	unsigned int i = 0;

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
	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			return (ptr);
		}
		else
			temp = temp->next;
		i++;
	}
	return (NULL);
}
