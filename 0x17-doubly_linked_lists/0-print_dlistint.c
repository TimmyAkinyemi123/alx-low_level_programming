#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the doubly-linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int num = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		num++;
		temp = temp->next;
	}
	return (num);
}
