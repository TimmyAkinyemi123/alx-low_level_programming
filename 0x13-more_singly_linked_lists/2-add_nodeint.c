#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add node at the beginning of linked list
 * @head: pointer to first node
 * @n: data to insert in new node
 * Return: pointer to address of new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
