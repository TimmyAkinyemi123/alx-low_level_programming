#include "lists.h"
/**
 * add_dnodeint - dds a new node at the beginning of list
 * @head: pointer to pointer of head node
 * @n: integer to insert
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;

	if (*head != NULL)
		(*head)->prev = ptr;
	(*head) = ptr;
	return (*head);
}
