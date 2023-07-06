#include "lists.h"
size_t count_unique(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * count_unique - number of unique nofes
 * @head: pointer to head of the list
 * Return: 0 or number of unique nodes
 */
size_t count_unique(const listint_t *head)
{
	const listint_t *val, *temp;
	size_t num = 1;

	if (!head || !(head->next))
		return (0);
	val = head->next;
	temp = (head->next)->next;

	while (temp)
	{
		if (val == temp)
		{
			val = head;
			while (val != temp)
			{
				num++;
				val = val->next;
				temp = temp->next;
			}
			val = val->next;
			while (val != temp)
			{
				num++;
				val = val->next;
			}
			return (num);
		}
		val = val->next;
		temp = (temp->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a linked list safely
 * @head: pointer to head of th list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = count_unique(head), i = 0;

	if (nodes == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else
	{
		while (i < nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
