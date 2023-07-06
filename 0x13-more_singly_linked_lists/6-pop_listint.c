#include "lists.h"
/**
 * pop_listint -deletes head node of list
 * @head: pointer to the first node
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL || head == NULL)
		return (0);
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
