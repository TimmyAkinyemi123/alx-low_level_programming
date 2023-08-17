#include "lists.h"
/**
 * dlistint_len - returns the number of elements in list
 * @h: head node of the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int num = 0;

	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}
