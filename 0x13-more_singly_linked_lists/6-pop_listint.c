#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delete the head node of listint_t
 * @head: pointer to head node
 * Return: data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
