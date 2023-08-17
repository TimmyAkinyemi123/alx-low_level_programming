#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer of head node
 * @idx: index or given position
 * @n:integer ot insert
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int i;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; temp != NULL && i < idx; i++)
		temp = temp->next;
	if (!temp && idx > 0)
		return (NULL);
	if (!temp->next)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = temp->prev;
	new->next = temp;
	temp->prev->next = new;
	temp->prev = new;

	return (new);
}
