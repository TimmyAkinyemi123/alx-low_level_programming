#include "lists.h"
/**
 * sum_listint - finds sum of all data in linked list
 * @head: linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	in sum = 0;
	listint_t *temp = head;

	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
