#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add new node at the end of list
 * @head: pointer to the first node
 * @n: data of the new node
 *
 * Return: the address of new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = ptr;
	return (ptr);
}
