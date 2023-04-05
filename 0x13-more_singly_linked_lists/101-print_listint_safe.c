#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - number of nodes in lined list
 * @head: pointer to listint_t
 * Return: 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *foxy, *brown;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	foxy = head->next;
	brown = (head->next)->next;
	while (brown)
	{
		if (foxy == brown)
		{
			foxy = brown;
			while (foxy != brown)
			{
				nodes++;
				foxy = foxy->next;
				brown = brown->next;
			}
			foxy = foxy->next;
			while (foxy != brown)
			{
				nodes++;
				foxy = foxy->next;
			}
			return (nodes);
		}
		foxy = foxy->next;
		brown = (brown->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - print list safely
 * @head: pointer to listint_t
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
