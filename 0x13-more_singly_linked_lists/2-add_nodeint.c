#include "lists.h"
/**
 * add_nodeint - adds node at beginning of list
 * @head: pointer to first node of the list
 * @n: data
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
